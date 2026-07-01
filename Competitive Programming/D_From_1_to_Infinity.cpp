#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

// Array to store powers of 10 (1, 10, 100, etc.) for quick access
ll p10[18];

// A fast mathematical function to find the sum of digits of all numbers from 1 up to n
ll get_sum_digits_up_to(ll n) {
    if (n <= 0) return 0;
    if (n < 10) return n * (n + 1) / 2;

    string s = to_string(n);
    int len = s.length();
    ll ans = 0;

    // 1. Add sum for all numbers with fewer digits than n
    // e.g., if n=345, this adds the sum for 1-99
    if (len > 1) {
        ans += (ll)(len - 1) * 45 * p10[len - 2];
    }
    
    // 2. Add sum for numbers with the same number of digits as n
    ll prefix_sum = 0;
    for (int i = 0; i < len; ++i) {
        int digit = s[i] - '0';
        int rem_len = len - 1 - i;
        
        ll start_digit = (i == 0) ? 1 : 0;
        for (int j = start_digit; j < digit; ++j) {
            ans += (prefix_sum + j) * p10[rem_len];
            if (rem_len > 0) {
                ans += (ll)rem_len * 45 * p10[rem_len - 1];
            }
        }
        
        prefix_sum += digit;
    }

    // 3. Add the sum of digits of n itself
    ans += prefix_sum;

    return ans;
}

void solve() {
    ll k;
    cin >> k;

    ll total_sum = 0;
    ll len = 1;
    ll count = 9;
    ll start_num = 1;

    for (len = 1; len <= 16; ++len) {
        ll digits_in_block = len * count;

        // Check if k is larger than the current block of numbers
        if (k > digits_in_block) {
            k -= digits_in_block;
            
            // Add the sum of digits for the entire block (e.g., all 2-digit numbers)
            ll end_num = start_num + count - 1;
            total_sum += get_sum_digits_up_to(end_num) - get_sum_digits_up_to(start_num - 1);
            
            // Move to the next block (e.g., from 2-digit to 3-digit numbers)
            count *= 10;
            start_num *= 10;
        } else {
            // k falls within this block. This is the final step.
            
            // Find how many full numbers from this block are included
            ll num_full_numbers = (k - 1) / len;
            
            if (num_full_numbers > 0) {
                ll end_full_num = start_num + num_full_numbers - 1;
                total_sum += get_sum_digits_up_to(end_full_num) - get_sum_digits_up_to(start_num - 1);
            }
            
            // Find the last number, which might be only partially included
            ll last_num_val = start_num + num_full_numbers;
            ll remaining_digits_count = (k - 1) % len + 1;
            
            // Add the sum of the digits from that final, partial number
            string last_num_str = to_string(last_num_val);
            for (int i = 0; i < remaining_digits_count; ++i) {
                total_sum += last_num_str[i] - '0';
            }
            
            break; // We are done
        }
    }
    cout << total_sum << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Pre-calculate powers of 10 once
    p10[0] = 1;
    for (int i = 1; i <= 17; ++i) {
        p10[i] = p10[i - 1] * 10;
    }
    
    int tc;
    cin >> tc;
    
    while (tc--) {
        solve();
    }
    
    return 0;
}
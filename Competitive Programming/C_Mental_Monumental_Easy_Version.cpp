#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Checks if we can form a MEX of M
bool check(int M, const vector<int>& a, int n) {
    vector<bool> needed(M, true);
    
    // Frequency array to store available capacities.
    // Max capacity we ever care about is n, so we cap it there.
    vector<int> cap_counts(n + 1, 0);

    for (int x : a) {
        // Step 1: Try to satisfy exact matches first
        if (x < M && needed[x]) {
            needed[x] = false;
        } else {
            // Step 2: Unused elements become "free" with a specific capacity
            int cap = (x == 0) ? -1 : (x - 1) / 2;
            if (cap >= 0) {
                cap_counts[min(cap, n)]++;
            }
        }
    }

    // Step 3: Greedily match remaining needed values to available capacities
    int current_cap = 0;
    for (int v = 0; v < M; v++) {
        if (!needed[v]) continue; // Already satisfied via exact match

        // We need a capacity that is at least 'v'
        current_cap = max(current_cap, v);
        
        // Find the next available valid capacity
        while (current_cap <= n && cap_counts[current_cap] == 0) {
            current_cap++;
        }

        // If we ran out of valid capacities, M is impossible
        if (current_cap > n) return false;

        // Use one instance of this capacity
        cap_counts[current_cap]--;
    }
    
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Binary search for the maximum possible MEX
    int L = 0, R = n;
    int mexwf = 0;
    
    while (L <= R) {
        int mid = L + (R - L) / 2;
        if (check(mid, a, n)) {
            mexwf = mid; // Mid is achievable, save it and try higher
            L = mid + 1;
        } else {
            R = mid - 1; // Mid is impossible, try lower
        }
    }
    
    cout << mexwf << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        unordered_map<int, vector<int>> brand_bottles;

        // Input all bottles and group them by brand
        for (int i = 0; i < k; ++i) {
            int b, c;
            cin >> b >> c;
            brand_bottles[b].push_back(c);
        }

        // Store the maximum earnings for each brand
        vector<long long> brand_earnings;

        // For each brand, sort bottles by cost in descending order
        for (auto& [brand, costs] : brand_bottles) {
            sort(costs.rbegin(), costs.rend());  // Sort in descending order
            long long sum = 0;
            
            // Calculate cumulative sums for top bottles for this brand
            for (int i = 0; i < costs.size(); ++i) {
                sum += costs[i];
                brand_earnings.push_back(sum);
            }
        }

        // Sort all possible earnings in descending order
        sort(brand_earnings.rbegin(), brand_earnings.rend());

        // Calculate the maximum earnings possible with n shelves
        long long max_earning = 0;
        for (int i = 0; i < min(n, (int)brand_earnings.size()); ++i) {
            max_earning += brand_earnings[i];
        }

        cout << max_earning << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int INF = 1e9;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> stamps(n); // (width, height) of each stamp
        for (int i = 0; i < n; ++i) {
            cin >> stamps[i].first >> stamps[i].second;
        }

        vector<vector<int>> dp(n + 1, vector<int>(10101, INF));
        dp[0][0] = 0;

        for (int i = 1; i <= n; ++i) {
            for (int area = 0; area <= 10000; ++area) {
                int min_perimeter = INF;
                for (auto [w, h] : stamps) {
                    if (area >= w * h) {
                        min_perimeter = min(min_perimeter, dp[i - 1][area - w * h] + 2 * (w + h));
                    }
                }
                dp[i][area] = min_perimeter;
            }
        }

        // Output the minimum perimeter for the entire grid (total area = 10000)
        cout << dp[n][10000] << "\n";
    }
    return 0;
}

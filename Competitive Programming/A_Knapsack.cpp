#include <bits/stdc++.h>
using namespace std;

const int MAXN = 105;     
const int MAXW = 10005; 

int n, W;
int w[MAXN];
int dp[MAXN][MAXW];
bool take[MAXN][MAXW];
int half;

int f(int i, int cap) {
    if (i == n) return 0;
    if (dp[i][cap] != -1) return dp[i][cap];

    int not_take = f(i + 1, cap);
    int take_it = 0;
    if (w[i] <= cap) take_it = w[i] + f(i + 1, cap - w[i]);

    if (take_it >= not_take) {
        take[i][cap] = true;
        return dp[i][cap] = take_it;
    } else {
        take[i][cap] = false;
        return dp[i][cap] = not_take;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> W;
    for (int i = 0; i < n; i++) cin >> w[i];

    half = (W + 1) / 2;
    memset(dp, -1, sizeof(dp));

    int best = f(0, W);

    if (best < half) {
        cout << -1 << "\n";
        return 0;
    }


    vector<int> ans;
    int cap = W;
    for (int i = 0; i < n; i++) {
        if (take[i][cap]) {
            ans.push_back(i + 1);
            cap -= w[i];
        }
    }

    cout << ans.size() << "\n";
    for (int x : ans) cout << x << " ";
    cout << "\n";
    return 0;
}

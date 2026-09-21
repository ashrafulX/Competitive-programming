/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:30:03 21/09/2026
**/
#include <bits/stdc++.h>
using namespace std;
#define MESSI ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
void rhafsolve()
{
    int n, k; cin >> n >> k;

    vector<int> freq(n + 1);
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        freq[x]++;
    }

    vector<int> spf(n + 1);
    for (int i = 1; i <= n; i++)spf[i] = i;

    for (int i = 2; i * i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (spf[j] == j)spf[j] = i;
            }
        }
    }

    vector<int> dp(n + 1);
    for (int x = k + 1; x <= n; x++)
    {
        dp[x] = 1e18;
        int y = x;
        while (y > 1)
        {
            int p = spf[y];
            dp[x] = min(dp[x], 1 + p * dp[x / p]);
            while (y % p == 0) y /= p;
        }
    }

    int ans = 0;
    for (int x = k + 1; x <= n; x++) ans += freq[x] * dp[x];

    cout << ans << nl;
}

// observation
/**
    x -> p copies of x/p

    dp[x] = min(1 + p * dp[x/p])

    x <= k => dp[x] = 0
**/
signed main() {
    MESSI;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
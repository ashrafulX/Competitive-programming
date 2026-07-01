/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 22:28:03 30/06/2026
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

const int MAX = 1000000;
vector<int> v;
vector<vector<int>> adj;
vector<int> sub;
vector<char> square;
int ans;
int n;
void dfs(int u, int p)
{
    sub[u] = 1;

    for (int x : adj[u])
    {
        if (x == p) continue;
        dfs(x, u);
        sub[u] += sub[x];
    }
    int sq = 0, cube = 0;
    for (int x : adj[u])
    {
        int cnt;

        if (x == p)  cnt = n - sub[u];
        else  cnt = sub[x];
        sq += cnt * cnt;
        cube += cnt * cnt * cnt;
    }
    int total = n - 1;
    if (square[v[u]])
    {
        ans += (total * total - sq) / 2;
        ans += (total * total * total - 3 * total * sq + 2 * cube) / 6;
    }
}
void rhafsolve()
{
    cin >> n;

    v.assign(n + 1, 0);
    adj.assign(n + 1, {});
    sub.assign(n + 1, 0);

    for (int i = 1; i <= n; i++)cin >> v[i];

    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    ans = 0;
    dfs(1, 0);

    cout << ans << nl;
}
//observation
/**
 
 **/
signed main() {
    MESSI;

    int t = 1;
    cin >> t;
    square.assign(MAX + 1, 0);

    for (int i = 0;i*i<=MAX;i++) square[i * i] = 1;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
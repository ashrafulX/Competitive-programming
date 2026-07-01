/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 15:05:15 23/08/2025
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define MESSI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define yes cout << "YES\n"
#define no cout << "NO\n"

const int N = 1e6 + 5;
vector<int> adj[N];
vector<ll> leaf;

void DFS(int curr, int par)
{
    bool child = false;
    for (auto i : adj[curr])
    {
        if (i == par)
            continue;
        child = true;
        DFS(i, curr);
        leaf[curr] += leaf[i];
    }
    if (!child)
        leaf[curr] = 1;
}

void rhafsolve()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
        adj[i].clear();
    leaf.assign(n + 2, 0);

    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    DFS(1, -1);

    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        ll ans = leaf[x] * leaf[y];
        cout << ans << endl;;
    }
}

int main() {
    MESSI;

    int t = 1;
    cin >> t;
    while (t--) {
        rhafsolve();
    }
    return 0;
}

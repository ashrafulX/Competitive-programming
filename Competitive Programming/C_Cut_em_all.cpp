/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Ashraful Islam
 *   Time & Date : 19:23:38 20/08/2025
 **/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define MESSI                    \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define yes cout << "YES\n"
#define no cout << "NO\n"

vector<pair<ll, ll>> edges;
vector<vector<ll>> adj;
ll n;

ll dfs(ll u, ll p, ll &res)
{
    ll tree = 1;
    for (ll i = 0; i < adj[u].size(); i++)
    {
        ll v = adj[u][i];
        if (v == p)
            continue;
        ll child_size = dfs(v, u, res);
        if (child_size % 2 == 0)
            res++;
        else
            tree += child_size;
    }
    return tree;
}

ll solve()
{
    n = edges.size() + 1;
    if (n % 2 == 1)
        return -1;

    adj.clear();
    adj.resize(n + 1);
    for (ll i = 0; i < edges.size(); i++)
    {
        ll u = edges[i].first;
        ll v = edges[i].second;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    ll res = 0;
    dfs(1, -1, res);
    return res;
}

void rhafsolve()
{
    ll m;
    cin >> m;
    edges.resize(m - 1);
    for (ll i = 0; i < m - 1; i++)
        cin >> edges[i].first >> edges[i].second;

    cout << solve() << endl;
    ;
}

int main()
{
    MESSI;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        rhafsolve();
    }

    return 0;
}

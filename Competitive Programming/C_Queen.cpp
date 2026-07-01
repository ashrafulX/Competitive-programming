/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 03:55:52 16/08/2025
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define yes cout << "YES\n"
#define no cout << "NO\n"
bool flag;
void rhafsolve()
{
    int n, m;
    cin >> n;
    vector<int> adj[n + 1], bad(n + 1), a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin>>x>>y;
        int u = x, v = i;
        if (u != -1)
        {
            adj[u].push_back(v);
        }
        else
        {
            m = i;
        }
        if (y == 1)
        {
            bad[u]++;
            a[v] = 1;
        }
    }

    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        if (m == i) continue;

        if ((adj[i].size() == bad[i] && a[i] == 1))
        {
            ans.push_back(i);
        }
    }

    if (ans.empty())
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}
int main() {
    FAST_IO;

    int t = 1;
    // cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
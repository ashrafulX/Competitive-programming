/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 17:05:08 22/08/2025
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

bool flag;

void rhafsolve()
{
    int n;
    cin >> n;

    vector<vector<int>> g(n);
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].pb(b);
        g[b].pb(a);
    }

    vector<int> col(n, -1);
    queue<int> q;
    col[0] = 0;
    q.push(0);

    ll s0 = 0, s1 = 0;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        if (col[v] == 0)
            s0++;
                else
                    s1++;
        for (int u : g[v])
        {
            if (col[u] == -1)
            {
                if (col[v] == 0)
                    col[u] = 1;
                else
                    col[u] = 0;
                q.push(u);
            }
        }
    }

    cout << (s0 * s1 - (n - 1)) << endl;
}

int main() {
    MESSI;

    int t = 1;
    // cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}

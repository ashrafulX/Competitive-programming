/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:37:23 22/08/2025
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

int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, -1, 1, 0};

vector<int> a[1111];
bool vis[1111][1111];

bool isvalid(int x, int y, int n, int m)
{
    return (x > -1 and x < n and y > -1 and y < m and !vis[x][y] and a[x][y] != 0);
}

ll DFS(int x, int y, int n, int m)
{
    ll res = a[x][y];
    vis[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
        int tx = x + dx[i];
        int ty = y + dy[i];
        if (isvalid(tx, ty, n, m))
        {
            res += DFS(tx, ty, n, m);
        }
    }
    return res;
}

void rhafsolve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        a[i].resize(m);
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            vis[i][j] = false;
        }
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vis[i][j] || a[i][j] == 0)
                continue;
            ans = max(ans, DFS(i, j, n, m));
        }
    }

    cout << ans << endl;
}

int main() {
    MESSI;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}

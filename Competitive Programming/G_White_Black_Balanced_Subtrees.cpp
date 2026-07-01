/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 19:03:43 17/08/2025
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

const int N = 2e5;
vector<int> adj[N];
int white[N], black[N];

void DFS(int curr, int par)
{
    for (auto i : adj[curr])
    {
        if (i != par)
        {
            DFS(i, curr);
            white[curr] += white[i];
            black[curr] += black[i];
        }
    }
}

void rhafsolve()
{
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        adj[i].clear();
        white[i] = 0;
        black[i] = 0;
    }

    int root = 1;
    int a[n + 1];
    for (int i = 2; i <= n; i++)
    {
        cin >> a[i];
        adj[a[i]].pb(i);
    }

    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W')
            white[i + 1] = 1;
        else
            black[i + 1] = 1;
    }

    DFS(root, -1);

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (white[i] == black[i])
            ans++;
    }
    cout << ans << endl;;
}

int main() {
    FAST_IO;

    int t;
    cin >> t;
    while (t--) {
        rhafsolve();
    }

    return 0;
}

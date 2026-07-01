/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 22:17:45 07/09/2025
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

void rhafsolve()
{
    int n, k;
    cin >> n >> k;

    int v[100];
    for (int i = 0; i < n; i++) cin >> v[i];

    int idx = 0;
    while (idx < k && idx < 50)
    {
        int nxt[100];
        int cur[101];

        for (int i = 0; i < n; i++)
        {

            for (int t = 0; t <= n; t++)
                cur[t] = 0;
            for (int j = 0; j < n; j++)
                if (i != j && v[j] <= n)
                    cur[v[j]] = 1;

            int mex = 0;
            while (cur[mex])
                mex++;
            nxt[i] = mex;
        }

        int flag = 1;
        for (int i = 0; i < n; i++)
            if (nxt[i] != v[i])
                flag = 0;

        if (flag)   break;

        for (int i = 0; i < n; i++) v[i] = nxt[i];
        idx++;
    }

    ll ans = 0;
    for (int i = 0; i < n; i++) ans += v[i];
    cout << ans << endl;
}

//observation
/**
 
 **/
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
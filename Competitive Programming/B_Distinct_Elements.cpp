/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:39:27 12/10/2025
**/
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
    int n;
    cin >> n;
    vector<ll> b(n);
    for (int i = 0; i < n; i++)     cin >> b[i];

    vector<int> ans(n);
    int nxt= 1;
    ll prev = 0;

    for (int i = 0; i < n; i++)
    {
        ll val = b[i] - prev;
        int lst = i + 1 - val;

        if (lst == 0)
        {

            ans[i] = nxt;
            nxt++;
        }
        else
        {

            ans[i] = ans[lst - 1];
        }
        prev = b[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
        if (i != n - 1)
            cout << " ";
    }
cout << endl;
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
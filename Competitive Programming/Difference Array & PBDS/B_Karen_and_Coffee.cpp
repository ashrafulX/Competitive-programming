/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 20:20:10 25/07/2025
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
const int MAX = 2e5 + 5;

int diff[MAX], freq[MAX], adm[MAX], pre[MAX];

void rhafsolve()
{
    int n, k, q;
    cin >> n >> k >> q;

    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        diff[l]++;
        diff[r + 1]--;
    }

    for (int i = 1; i < MAX; i++)
    {
        freq[i] = freq[i - 1] + diff[i];
    }

    for (int i = 1; i < MAX; i++)
    {
        if (freq[i] >= k)
            adm[i] = 1;
    }

    for (int i = 1; i < MAX; i++)
    {
        pre[i] = pre[i - 1] + adm[i];
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << pre[b] - pre[a - 1] << endl;

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
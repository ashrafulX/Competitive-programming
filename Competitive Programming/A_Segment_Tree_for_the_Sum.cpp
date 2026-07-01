/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 14:43:15 25/08/2025
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

const int maxN = 1e5 + 9;
ll a[maxN], t[4 * maxN];

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = a[b];
        return;
    }
    int mid = (b + e) / 2;
    int l = 2 * n, r = 2 * n + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = t[l] + t[r];
}

void update(int n, int b, int e, int i, int v)
{
    if (i < b || i > e)
        return;
    if (b == e)
    {
        t[n] = v;
        return;
    }
    int mid = (b + e) / 2;
    int l = 2 * n, r = 2 * n + 1;
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);
    t[n] = t[l] + t[r];
}

ll query(int n, int b, int e, int i, int j)
{
    if (e < i || j < b)
        return 0;
    if (b >= i && e <= j)
        return t[n];
    int mid = (b + e) / 2;
    int l = 2 * n, r = 2 * n + 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

void rhafsolve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    build(1, 1, n);

    while (m--) {
        int type;
        cin >> type;
        if (type == 1) {
            int idx, v;
            cin >> idx >> v;
            idx++;
            update(1, 1, n, idx, v);
        } else {
            int l, r;
            cin >> l >> r;
            l++;
            cout << query(1, 1, n, l, r) << endl;
        }
    }
}

//observation
/**
 * Segment Tree for range sum
 * update -> O(log n)
 * query  -> O(log n)
**/

int main() {
    MESSI;

    int t = 1;
    // cin>>t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}


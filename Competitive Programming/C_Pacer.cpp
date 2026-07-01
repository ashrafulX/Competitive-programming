/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:59:41 13/09/2025
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
void rhafsolve() {
    int n, m;
    cin >> n >> m;
    vector<int> time(n), side(n);
    for (int i = 0; i < n; i++) cin >> time[i] >> side[i];

    ll ans = 0;
    int pos = 0, t = 0;

    for (int i = 0; i < n; i++)
    {
        int dt = time[i] - t;
        int dist = abs(side[i] - pos);

        if (dt < dist)
        {
            cout << 0 << endl;
            return;
        }

        ans += dt - (dt - dist) % 2;
        pos = side[i];
        t = time[i];
    }

    ans += m - t;
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
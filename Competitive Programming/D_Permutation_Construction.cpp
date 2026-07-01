/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 00:01:11 26/04/2026
**/
#include <bits/stdc++.h>
using namespace std;
#define MESSI ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
void rhafsolve()
{
    int n;  cin >> n;
    vector<ll> a(n);
    for (auto &x : a)   cin >> x;

    vector<pair<ll, int>> b(n);
    b[0] = {0, 0};

    for (int i = 1; i < n; i++)     b[i] = {b[i - 1].first + a[i - 1], i};

    b[0].second = 0;

    sort(rall(b));

    vector<int> p(n);
    for (int i = 0; i < n; i++)
        p[b[i].second] = i + 1;

    for (int i = 0; i < n; i++)
        cout << p[i] << " \n"[i == n - 1];
}
//observation
/**
 
 **/
signed main() {
    MESSI;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
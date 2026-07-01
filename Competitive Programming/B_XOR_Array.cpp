/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 15:39:58 06/12/2025
**/
#include <bits/stdc++.h>
using namespace std;
#define MESSI ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
void rhafsolve()
{
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> p(n + 1), a(n + 1);
    p[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i == r) p[i] = p[l - 1];
        else    p[i] = i;
    }

    for (int i = 1; i <= n; i++)
        a[i] = p[i] ^ p[i - 1];

    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << nl;
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
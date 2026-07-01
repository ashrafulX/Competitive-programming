/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:02:10 04/02/2026
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
    ll n, k;
    cin >> n >> k;

    vector<ll> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];

    if (n < 2) {
        cout << 0 << nl;
        return;
    }

    int ans = 0;
    ll low = p[0], high = p[0];

    for (int i = 1; i < n; i++) {
        if (p[i] > high) {
            high = p[i];
        }
        else if (p[i] < low) {
            low = p[i];
        }


        if (high - low > k) {
            ans++;
            low = high = p[i];
        }
    }

    cout << ans << nl;
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
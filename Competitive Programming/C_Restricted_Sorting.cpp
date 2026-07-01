/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:03:11 29/01/2026
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

void rhafsolve() {
    int n; cin >> n;

    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    b = a;
    sort(all(b));;

    if (a == b) 
    {
        cout << -1 << nl;
        return;
    }

    ll mn = b[0], mx = b[n - 1];
    ll k = LLONG_MAX;

    for (int i = 0; i < n; i++) 
    {
        if (a[i] != b[i]) 
        {
            k = min(k, max(llabs(a[i] - mn), llabs(a[i] - mx)));
        }
    }

    cout << k << nl;
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
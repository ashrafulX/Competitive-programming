/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:07:12 14/11/2025
**/
#include <bits/stdc++.h>
using namespace std;
#define MESSI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

void rhafsolve()
{
    int n;  
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<ll> pref(n + 1, 0);
    for (int i = 0; i < n; i++) pref[i + 1] = pref[i] + a[i];

    ll sum = pref[n];
    ll mx = 0;

    ll range = -4e18;

    for (int r = 0; r < n; r++) 
    {

        ll left = pref[r] - 1LL * r * (r + 1);
        range = max(range, left);

        ll right =(r + 1) * 1LL* (r + 2) - pref[r + 1];

        mx = max(mx, range + right);
    }

    cout << sum + mx << endl;
}

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

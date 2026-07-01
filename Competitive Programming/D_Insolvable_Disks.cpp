/**
* In the name of Allah, the Most Gracious, the Most Merciful.
* Author : Ashraful Islam
* Time & Date : 21:48:10 19/12/2025
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
    int n;
    cin >> n;

    vector<ll> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];

    if (n < 2)
    {
        cout << 0 << nl;
        return;
    }

    ll ans = 0;
    int i = 0;
    while (i < n - 1)
    {
        int j = i;
        ll diff = x[i + 1] - x[i];
        while (j + 1 < n && x[j + 1] - x[j] == diff)
        {
            j++;
        }
        
        int len = j - i;
        ans += len;
        i = j;
    }

    cout << ans << nl;
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
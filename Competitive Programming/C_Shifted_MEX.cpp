/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 20:50:14 18/01/2026
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
    int n;  cin>>n;
    set<ll> s;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }

    int ans = 0, cnt = 0;
    ll pre = LLONG_MIN;

    for (auto  x : s)
    {
        if (pre != LLONG_MIN && x == pre + 1)
        {
            cnt++;
        }
        else
        {
            cnt = 1;
        }
        ans = max(ans, cnt);
        pre = x;
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
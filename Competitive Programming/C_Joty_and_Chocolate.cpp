/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 00:38:50 16/12/2025
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
    ll n,a,b,p,q;      cin>>n>>a>>b>>p>>q;

    ll x=(n/a)*p;
    ll y=(n/b)*q;
    ll rmv=(n/lcm(a,b));
    ll ans=((x+y)-(rmv*(p+q))) + (rmv*max(p,q));
    cout<<ans<<nl;
}
//observation
/**
 
 **/
int main() {
    MESSI;

    int t = 1;
    // cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
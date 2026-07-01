/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:50:11 21/02/2026
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
    ll n,l,r;  cin>>n>>l>>r;
    vector<ll> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];

    sort(all(v));
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        int a=l-v[i];
        int b=r-v[i];
        int lw=lower_bound(v.begin()+i+1,v.end(),a)-v.begin();
        int hw=upper_bound(v.begin()+i+1,v.end(),b)-v.begin();
        ans+=(hw-lw);

    }
    cout<<ans<<nl;
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


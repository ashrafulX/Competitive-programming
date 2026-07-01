/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 02:32:01 30/11/2025
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
#define yes cout << "YES\n"
#define no cout << "NO\n"
void rhafsolve()
{
    ll n,k; cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)     cin>>v[i];
    
    ll l=0,r=0,sum=0;
    ll ans=LLONG_MAX;
    while(r<n)
    {
        sum+=v[r];
        if(sum>=k)
        {
            ans=min(r-l+1,ans);
        }
        while(sum>=k && l<=r)
        {
            sum-=v[l];
            l++;
            if(sum>=k) ans=min(r-l+1,ans);
        }
        r++;
    }
    if(ans==LLONG_MAX) cout<<-1<<endl;
    else cout<<ans<<endl;
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
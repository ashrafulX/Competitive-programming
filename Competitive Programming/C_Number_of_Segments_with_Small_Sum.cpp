/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 19:08:24 26/11/2025
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
    ll n,k;     cin>>n>>k;
    vector<ll> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];

    int l=0,r=0;
    ll sum=0;
    ll ans=0;
    while(r<n)
    {
        sum+=v[r];
        while(sum>k)
        {
            sum-=v[l];
            l++;
        }
        ans+=(r-l+1);
        r++;

    }
    cout<<ans<<endl;
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
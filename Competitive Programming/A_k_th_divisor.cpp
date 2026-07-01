/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 03:35:36 12/12/2025
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
    ll n,k;     cin>>n>>k;
    vector<ll> ans;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ans.pb(i);
            if((n/i)!=i) ans.pb(n/i);
        }
    }
    sort(all(ans));
    if(k>ans.size())
    {
        cout<<-1<<nl;
        return;
    }
    k--;
    cout<<ans[k]<<nl;
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
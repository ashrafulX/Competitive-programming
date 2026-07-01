#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    FAST_IO;

int t=1;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    auto ok=[&](ll a,ll b)
    {
        while(b)
        {
            ll r=a%b;
            a=b;
            b=r;
        }
        return a;
    };

    ll val=1,l=1;
    for(int i=0;i<n;i++)
    {
        ll g=ok(l,v[i]);
        ll ans=l/g;
        ll gg=ok(val,ans);
        val=val/gg*ans;
        l=ans*v[i];
    }
    cout<<val<<endl;
}

   return 0;
}

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
    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    ll g1=0;
    ll g2=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            g1=__gcd(g1,v[i]);
        }
        else
            g2=__gcd(g2,v[i]);
    }
    // if(g1%g2==0)
    //     cout<<0<<endl;
    //         else
    //             cout<<g1<<endl;
    bool flag=true;
    for(int i=1;i<n;i+=2)
    {
        if(v[i]%g1==0)
        {
            flag=false;
            break;
        }
    }
    ll ans=0;
    if(flag)
        ans=g1;
            else
                {
                    flag=true;
                    for(int i=0;i<n;i+=2)
                    {
                        if(v[i]%g2==0)
                        {
                            flag=false;
                            break;
                        }
                    }
                    if(flag)
                        ans=g2;
                }
    cout<<ans<<endl;
    
}

   return 0;
}
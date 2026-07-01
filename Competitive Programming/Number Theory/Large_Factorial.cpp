#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
const int MOD=1e9+7;
int main() {
    FAST_IO;

int t=1;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    ll ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=(1LL * ans%MOD * i%MOD)%MOD;
    }
    cout<<ans<<endl;
}

   return 0;
}





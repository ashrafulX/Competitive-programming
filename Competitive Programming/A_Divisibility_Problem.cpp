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
    int a,b;
    int div=0,ans=0;
    cin>>a>>b;
    if(a%b==0)
    {
        cout<<0<<endl;
        continue;
    }

        div=a/b;
        ans=(div+1)*b;
        cout<<ans-a<<endl;
}

   return 0;
}

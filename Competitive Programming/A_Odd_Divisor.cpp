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
    while(n%2==0)
    {
        n/=2;
    }
    if(n>1)
        cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
}

   return 0;
}

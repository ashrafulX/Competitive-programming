#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    FAST_IO;

int t=1;
// cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<bool> prime (n+1,true);
    for(int i=2;i<=n;i++)
    {
        if(prime[i])
        {
            for(int j=i+i;j<=n;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    // for(int i=2;i<=n;i++)
    // {
    //     if(prime[i])
    //     {
    //         cout<<i<<" ";
    //     }
    // }


    int isprime;
    cin>>isprime;
    if(prime[isprime])
        cout<<"Prime Number"<<endl;
            else
                cout<<"Non - prime"<<endl;
}

   return 0;
}


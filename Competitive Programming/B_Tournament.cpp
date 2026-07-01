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
    int n,a,b;
    cin>>n>>a>>b;
    vector<int> v(n);
    int ans=0;

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]>ans)
        {
            ans=v[i];
        }
        
    }
    if(b>=2)
        cout<<"YES"<<endl;
            else
            {
                if(v[a-1]>=ans)
                {
                    cout<<"YES"<<endl;
                }
                else
                    cout<<"NO"<<endl;
            }

    
}


   return 0;
}
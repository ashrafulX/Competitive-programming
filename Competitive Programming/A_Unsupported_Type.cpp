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
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(all(v));
    int val;
    cin>>val;
    bool flag=false;
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(val==v[mid])
        {
            flag=true;
            break;
        }
        if(val<v[mid])
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    if(flag)
        cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
    
}

   return 0;
}


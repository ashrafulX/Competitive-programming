#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<long long int> v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    vector<long long int> pre(n+1);
    pre[1]=v[1];
    for(int i=2;i<=n;i++)
    {
        pre[i]=v[i]+pre[i-1];
    }
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        if(x==1)
        {
            cout<<pre[y]<<endl;
        }
        else
        {
            long long sum=pre[y]-pre[x-1];
            cout<<sum<<endl;
        }
    }
    return 0;
}
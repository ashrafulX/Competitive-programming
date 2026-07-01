#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    // for(int i=0;i<n;i++)
    // {
    //     if(v[i]<0)
    //     {
    //         v[i]=2;
    //     }
    //     else if(v[i]>0)
    //     {
    //         v[i]=1;
    //     }
    // }
    replace(v.begin(),v.end(),-2,2);
    replace(v.begin(),v.end(),+,1);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
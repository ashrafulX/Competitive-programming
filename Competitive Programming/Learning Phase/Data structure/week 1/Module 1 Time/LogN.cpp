#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // cout<<"i++";
    // for(int i=0;i<n;i++)
    // {
    //     cout<<i<<" ";
    // }
    cout<<"\n";
    cout<<"i+2"<<endl;
    for(int i=0;i<n;i=i+2)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"i*2"<<endl;
    for(int i=1;i<n;i=i*2)
    {
         cout<<i<<" ";
    }

    return 0;
}
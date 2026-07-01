#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>> v[i];
    }
    int fre[100001]={0};
    for(int i=0;i<n;i++)
    {
        fre[v[i]]++;
    }
    for(int i=1;i<=m;i++)
    {
        

            cout<<fre[i]<<endl;
       
    }

    return 0;
}
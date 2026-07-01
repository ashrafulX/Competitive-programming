#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1005];
    int n,p;
    cin>>n>>p;
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]>=p)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
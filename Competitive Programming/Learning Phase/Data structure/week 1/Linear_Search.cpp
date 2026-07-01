#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int search;
    cin>>search;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            flag=true;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int *b=new int[n+m];
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for(int i=n;i<+n+m;i++)
    {
        cin>>b[i];
    }
    delete[] a;
    for(int i=0;i<n+m;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}
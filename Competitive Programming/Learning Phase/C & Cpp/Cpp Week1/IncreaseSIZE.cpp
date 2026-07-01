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
    int *b=new int[10];
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    delete[] a;
    for(int i=5;i<10;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<10;i++)
    {
        cout<<b[i]<<" ";
    }
    delete[] b;
    for(int i=0;i<10;i++)
    {
        cout<<b[i]<<" ";
    }

    return 0;
}
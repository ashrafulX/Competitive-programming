#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={5,4,3,2,1};

    for(int i=0;i<5-1;i++)
    {
        int mn=i;
        for(int j=i+1;j<5;j++)
        {
            if(a[j]<a[i])
            {
                mn=j;
            }
        }
        swap(a[mn],a[i]);
    }

    for(int i=0;i<5;i++) cout<<a[i]<<" ";
    cout<<endl;
}
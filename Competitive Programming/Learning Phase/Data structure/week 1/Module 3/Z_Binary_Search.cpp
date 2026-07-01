#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    while(t--)
    {
        int find;
        cin>>find;
        int l=0;
        int r=n-1; 
        bool flag=false;
        while(l<=r)
        {

            int m=(l+r)/2;
            if(a[m]==find)
            {
                flag=true;
                break;
            }
            else if(a[m]<find)
            {
                l=m+1;
            }
            else if(a[m]>find)
            {
                r=m-1;
            }

        }
        if(flag)
        {
            cout<<"found"<<endl;
        }
        else
        {
            cout<<"not found"<<endl;
        }
    }
    return 0;
}
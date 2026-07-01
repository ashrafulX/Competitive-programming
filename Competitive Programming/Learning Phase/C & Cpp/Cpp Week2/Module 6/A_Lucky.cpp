#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int sum0=a[0] +a[1]+a[2];
        int sum1= a[3] +a[4]+a[5];
        if(sum0==sum1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        // int n;
        // cin>>n;
        // int a[6];
        // for(int i=0;i<6;i++)
        // {
        //     a[i]=n%10;
        //     n=n/10;
        // }
        // if(a[0]+a[1]+a[2]==a[3]+a[4]+a[5])
        // {
        //     cout<<"YES"<<endl;
        // }
        // else
        // {
        //     cout<<"NO"<<endl;
        // }
        
    }
    return 0;
}
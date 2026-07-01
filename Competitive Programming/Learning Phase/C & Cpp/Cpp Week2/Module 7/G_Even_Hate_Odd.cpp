#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int even=0,odd=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n%2 != 0)
        {
            cout<<"-1"<<endl;
            continue;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i] %2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(even==odd)
        {
            cout<<"0"<<endl;
        }
        // else if(even==0)
        // {
        //     cout<<odd/2<<endl;
        // }
        // else if(odd==0)
        // {
        //     cout<<even/2<<endl;
        // }
        else 
        {
            int diff=abs(even-odd)/2;
            cout<<diff<<endl;
        }
        

    }
    return 0;
}
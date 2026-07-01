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
            if(a.size()<=10)
            {
                cout<<a<<endl;
            }
            else 
            {
                cout<<a[0]<<a.size()-2<<a.back()<<endl;
            }
        
    }
    return 0;
}
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
        if(n==1 || n==3)
        {
            cout<<"-1"<<endl;
        }
        else if(n==2)
        {
            cout<<"66"<<endl;
        }
        else if(n==4)
        {
            cout<<"3366"<<endl;
        }
        else if(n==5)
        {
            cout<<"36366"<<endl;
        }
        else if(n==7)
        {
            cout<<"3336366"<<endl;
        }
        else {
            string result = string(n - 2, '3') + "66";
            cout<<result<<endl;
        }
    }
    return 0;
}
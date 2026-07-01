#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char d,e;
    cin>>a>>d>>b>>e>>c;
    if(d =='+')
    {
        if(a+b==c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<a+b<<endl;
        }
    }
    else if(d =='-')
    {
        if(a-b==c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<a-b<<endl;
        }
    }
    else if(d =='*')
    {
        if(a*b==c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
           cout<<a*b<<endl;
        }
    }
    return 0;
}
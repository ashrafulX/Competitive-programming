#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    string b;
    b=a;
    reverse(b.begin(),b.end());
    if(a==b)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
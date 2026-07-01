#include<bits/stdc++.h>
using namespace std;
int main()
{   
    long long a,b;
    cin>>a>>b;
    long long sum= a+b;
    long long sub= a-b;
    long long mul= a*b;
    cout<<a<<" "<<"+"<<" "<<b<<" "<<"="<<" "<<sum<<endl;
    cout<<a<<" "<<"*"<<" "<<b<<" "<<"="<<" "<<mul<<endl;
    cout<<a<<" "<<"-"<<" "<<b<<" "<<"="<<" "<<sub<<endl;
    return 0;
}
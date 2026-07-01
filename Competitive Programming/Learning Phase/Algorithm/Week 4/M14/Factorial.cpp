#include<bits/stdc++.h>
using namespace std;
long long int fact(long long int n)
{
    if(n == 1)
    {
        return 1;
    }
    long long mul=fact(n-1);
    return mul * n;
}
int main()
{
    long long int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}
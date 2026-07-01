#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    if(n>3)
    {
        return 0;
    }
    int sum=fun(n+1);
    return sum+n;
}
int main()
{
    cout<<fun(1)<<endl;
    return 0;
}
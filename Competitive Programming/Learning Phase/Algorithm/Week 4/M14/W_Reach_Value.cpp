#include<bits/stdc++.h>
using namespace std;
bool flag;
void solve(int n)
{
    if(n%2 == 0)
    {
        flag=true;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        flag=false;
        int n;
        cin>>n;
        if(n>9)
        solve(n);
        if(flag)
            cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
    }
    return 0;
}

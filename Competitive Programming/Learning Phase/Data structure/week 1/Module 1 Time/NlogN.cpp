#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) //O(n)
    {
        for(int j=1;j<=n;j=j*2) //O(logN)
        {
            cout<<i<<" ";
        }
        //so, O(n*logN)  = O(NlogN)
    }
    return 0;
}
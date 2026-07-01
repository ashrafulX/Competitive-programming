#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i=i*2) //i=i*2 its for O(logN)
    {
        cout<<i<<endl;
    }
    return 0;
}
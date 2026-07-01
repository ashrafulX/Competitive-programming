#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int t;
    cin>>t;
    int flag=-1;
    for(int i=0;i<n;i++)
    {
        if(t == a[i])
        {
            flag=i;
            break;
        }
    }
    cout<<flag<<endl;
    return 0;
}
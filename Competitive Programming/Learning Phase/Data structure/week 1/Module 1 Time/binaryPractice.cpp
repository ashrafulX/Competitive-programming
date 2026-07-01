#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    } // O(n)
    while(q--) //O(q)
    {
        int x;
        cin>>x;
        int flag=0;
        for(int i=0;i<n;i++) //O(n)
        {
            if(x==v[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"not found"<<endl;
        }
        else
        {
            cout<<"found"<<endl;
        }
    }
    return 0;
}
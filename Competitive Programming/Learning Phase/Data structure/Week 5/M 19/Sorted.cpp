#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        list<int> mylist;
        for(int i=0;i<n;i++)
        {
        int x;
        cin>>x;
        mylist.push_back(x);
        }
        mylist.sort();
        mylist.unique();
        

        for(auto it=mylist.begin(); it != mylist.end();it++)
        {
            cout<<*it<<" ";
        }        cout<<endl;
    }
    return 0;
}
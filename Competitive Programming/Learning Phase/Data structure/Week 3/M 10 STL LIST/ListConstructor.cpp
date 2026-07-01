#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // list<int>Mylist(n,5);
    // for(auto it=Mylist.begin(); it!=Mylist.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    // list<int>Mylist2(Mylist);
    // for(auto it=Mylist2.begin(); it!=Mylist2.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    int a[]={1,2,3,4,5,6};
    list<int>Mylist(a,a+6);
    for(int val: Mylist)
    {
        cout<<val<<" ";
    }
    return 0;
}
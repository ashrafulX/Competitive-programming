#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist;
    while(1)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        mylist.push_back(val);
    }
    mylist.sort();
    mylist.unique();
    for(int val : mylist)
    {
        cout<<val<<" ";
    }
    return 0;
}
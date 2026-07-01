// Question: Take a doubly linked list as input and sort it in ascending order. Then print the list.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist;
    int x;
    while(cin>>x)
    {
        if(x == -1)
        {
            break;
        }
        mylist.push_back(x);
    }
    mylist.sort();
    for(int val : mylist)
    {
        cout<<val<<" ";
    }
    return 0;
}
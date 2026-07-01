#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist={1,2,3,4,5};
    list<int> mylist2={9,10,11};
    mylist=mylist2;
    for(int val : mylist)
    {
        cout<<val<<" ";
    }
    return 0;
}
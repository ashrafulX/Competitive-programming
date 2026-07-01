#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist1={10,20,30,40,50};
    list<int>mylist2;
    mylist2=mylist1;
    mylist2.push_front(100);
    mylist2.push_back(200);
    mylist2.pop_front();
    mylist2.pop_back();
    for(int val : mylist2)
    {
        cout<<val<<" ";
    }

    return 0;
}
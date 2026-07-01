#include<bits/stdc++.h>
using namespace std;
void print(list<int>& mylist)
{
    cout<<"L -> ";
    for(int val : mylist)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}
void rev_print(list<int>& mylist)
{
    cout<<"R -> ";
    vector<int>v(mylist.begin(),mylist.end());
    for(int i=v.size()-1; i>=0; i--)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int>mylist;
    int q;
    cin>>q;
    while(q--)
    {
        int x,v;
        cin>>x>>v;
        if(x==0)
        {
            mylist.push_front(v);
            print(mylist);
            rev_print(mylist);
        }
        else if(x==1)
        {
            mylist.push_back(v);
            print(mylist);
            rev_print(mylist);
        }
        else if(x==2)
        {
            if (v >= 0 && v < mylist.size()) 
            {
                mylist.erase(next(mylist.begin(),v));
            }
            print(mylist);
            rev_print(mylist);
        }
    }
    return 0;
}
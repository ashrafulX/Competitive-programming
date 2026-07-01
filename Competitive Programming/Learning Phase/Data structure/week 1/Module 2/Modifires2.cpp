#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    int search;
    cin>>search;
    auto it=find(v.begin(),v.end(),search);
    if(it==v.end())
    {
        cout<<"404 NOT FOUND"<<endl;
    }
    else 
    {
        cout<<"GOT IT"<<endl;
    }
    return 0;
}
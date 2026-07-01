#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;

    mp["ashraf"]=10;
    mp["afsana"]=20;
    mp["bristy"]=12;
    mp["merisa"]=15;

    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        cout<< it->first<<" "<<it->second<<endl;
    }
    // cout<<mp["ashraf"]<<endl;
    if(mp.count("who"))
    {
        cout<<"Ache"<<endl;
    }
    else 
        cout<<"Nai"<<endl;
    return 0;
}
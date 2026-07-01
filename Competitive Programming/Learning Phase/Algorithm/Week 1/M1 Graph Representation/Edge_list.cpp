#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>> edge;
    int n,e;
    cin>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        edge.push_back({a,b});
        
    }
    for(int i=0;i<edge.size();i++)
    {
        cout<<edge[i].first<<" "<<edge[i].second;
        cout<<endl;
    }
    // short loop
    // for(pair<int,int> p : edge)
    // {
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    return 0;
}
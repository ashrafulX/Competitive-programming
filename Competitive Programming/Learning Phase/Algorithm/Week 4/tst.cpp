#include<bits/stdc++.h>
using namespace std;
const int N=1005;
int par[N];
int group_size[N];

int find(int node)
{
    if(par[node] == -1)
    {
        return node;
    }
    int leader=find(par[node]);
    par[node]=leader;
    return leader;
}

void dsu(int a, int b)
{
    int leaderA=find(a);
    int leaderB=find(b);
    if(group_size[leaderA] >= group_size[leaderB])
    {
        par[leaderB]=leaderA;
        group_size[leaderA]+=group_size[leaderB];
    }
    else
    {
        par[leaderA]=leaderB;
        group_size[leaderB]+=group_size[leaderA];
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        par[i]=-1;
        group_size[i]=1;
    }
    vector<pair<int,int>> v;
    vector<pair<int,int>> rm;
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        int leaderA=find(a);
        int leaderB=find(b);
        if(leaderA == leaderB)
        {
            v.push_back({a,b});
        }
        else
        {
            dsu(a,b);
        }
    }
    for(int i=1;i<=n;i++)
    {
        int a=find(1);
        int b=find(i);
        if(a != b)
        {
            dsu(1,b);
            rm.push_back({1,b});
        }
    }
    cout<<rm.size()<<endl;
    for(int i=0;i<rm.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<" "<<rm[i].first<<" "<<rm[i].second<<endl;
    }
   
    return 0;
}
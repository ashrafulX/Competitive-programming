#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int par[N];
int group_size[N];
int mx;
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
        mx=max(mx,group_size[leaderA]);
    }
    else
    {
        par[leaderA]=leaderB;
        group_size[leaderB]+=group_size[leaderA];
        mx=max(mx,group_size[leaderB]);

    }
}
int main()
{
    memset(par, -1, sizeof(par));
    for(int i=0;i<N;i++)
    {
        group_size[i]=1;
    }
    int n,e;
    cin>>n>>e;
    mx=1;
    int component=n;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        int leaderA=find(a);
        int leaderB=find(b);
        if(leaderA != leaderB)
        {
            dsu(a,b);
            component--;
        }
        cout<<component<<" "<<mx<<endl;
    }
    return 0;
}
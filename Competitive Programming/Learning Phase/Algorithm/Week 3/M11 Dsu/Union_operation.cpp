#include<bits/stdc++.h>
using namespace std;
int par[1005];
int g_size[1005];

int find(int node)
{
    if(par[node]== -1)
    {
        return node;
    }
    int leader=find(par[node]);
    par[node]=leader;
    return leader;
}
void dsu_union(int a, int b)
{
    int leaderA=find(a);
    int leaderB=find(b);
    if(g_size[leaderA] >= g_size[leaderB])
    {
        par[leaderB]=leaderA;
        g_size[leaderA]= g_size[leaderA]+g_size[leaderB];
    }
    else
        {
            par[leaderA]=leaderB;
            g_size[leaderB]= g_size[leaderB]+g_size[leaderA];
        }
}

int main()
{
    memset(par,-1,sizeof(par));
    memset(g_size, 1, sizeof(g_size));
    dsu_union(1,2);
    dsu_union(2,0);
    dsu_union(3,1);
    for(int i=0;i<6;i++)
    {
        cout<<i<<" -> "<<par[i]<<endl;
    }
    
    return 0;
}
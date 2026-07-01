#include<bits/stdc++.h>
using namespace std;
int par[1005];
int group_size[1005];
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
int dsu_union(int nodeA, int nodeB)
{
    int leaderA=find(nodeA);
    int leaderB=find(nodeB);
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
    memset(par, -1 , sizeof(par));
    memset(group_size, 1 , sizeof(group_size));
    int n,e;
    cin>>n>>e;
    bool cycle=false;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        int leaderA=find(a);
        int leaderB=find(b);
        if(leaderA == leaderB)
            {
                cycle=true;
            }
            else
            {
                dsu_union(a,b);
            }

    }
    if(cycle)
        cout<<"Cycle Detected"<<endl;
            else
                cout<<"No Cycle"<<endl;
    return 0;
}
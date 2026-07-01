#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> mat[105];
int dis[105];
void dijkstra(int src)
{
    queue<pair<int,int>> q;
    q.push({src,0});
    dis[src]=0;
    while(!q.empty())
    {
        pair<int,int> parent =q.front();
        q.pop();
        int node=parent.first;
        int cost=parent.second;
        for(pair<int,int> child : mat[node])
        {
            int child_Node=child.first;
            int child_Cost=child.second;
            if(cost+child_Cost < dis[child_Node])
            {
                dis[child_Node]=cost+child_Cost;
                q.push({child_Node,cost+child_Cost});


            }
        }

    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        mat[a].push_back({b,c});
        mat[b].push_back({a,c});
    }
    int src;
    cin>>src;
    // memset(dis,INT_MAX,sizeof(dis)); not working for INT_MAX
    for(int i=0;i<105;i++)
    {
        dis[i]=INT_MAX;
    }
    dijkstra(src);
    for(int i=0;i<5;i++)
    {
        cout<<dis[i]<<" ";
    }
    return 0;
}
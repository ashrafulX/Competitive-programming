#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> mat[105];
int dis[105];
void dijkstra(int src)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    q.push({0,src});
    dis[src]=0;
    while(!q.empty())
    {
        pair<int,int> parent=q.top();
        q.pop();
        int node=parent.second;
        int cost=parent.first;

        for(pair<int,int> child : mat[node])
        {
            int child_Node=child.first;
            int child_Cost=child.second;
            if(cost+child_Cost < dis[child_Node])
            {
                dis[child_Node]=cost+child_Cost;
                q.push({cost+child_Cost,child_Node});
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
#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[10005];
bool vis[10005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src]=true;
    while(!q.empty())
    {
        int parent=q.front();
        q.pop();

        cout<<parent<<" ";

        for(int child : adj_list[parent])
        {   
            if(!vis[child])
            {
            q.push(child);
            vis[child]=true;
            }
        }
        // for(int i=0;i<adj_list[parent].size();i++)
        // {
        //    int child=adj_list[parent][i];
        //    if(!vis[child])
        //     {
        //         q.push(child);
        //         vis[child]=true;
        //     }
        // }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    bfs(0);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[10005];
bool vis[10005];
int bfs(int src)
{   
    int sum=0;
    queue<int> q;
    q.push(src);
    vis[src]=true;
    while(!q.empty())
    {
        int parent=q.front();
        q.pop();

        sum=sum+parent;
        for(int i=0;i<adj_list[parent].size();i++)
        {
           int child=adj_list[parent][i];
           if(!vis[child])
            {
                q.push(child);
                vis[child]=true;
            }
        }
    }
    return sum;
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
    cout<<bfs(0);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int> mat[N];
bool vis[N];
int parent[N];
int level[N];
void solve(int src)
{
    queue<int> q;
    q.push(src);
    vis[src]=true;
    
    level[src]=-1;
    while(!q.empty())
    {
        int par=q.front();
        q.pop();
        for(int child : mat[par])
        {
            if(vis[child]==false)
            {
                q.push(child);
                vis[child]=true;
                parent[child]=par;
                level[child]=level[par]+1;
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
        int a,b;
        cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int src,des;
    cin>>src>>des;
    memset(vis,false,sizeof(vis));
    memset(parent,-1,sizeof(parent));
    memset(level,-1,sizeof(level));
    solve(src);
    int node=des;
    vector<int> v;
    while(true)
    {
        v.push_back(node);
        node=parent[node];
    }
    
    
    return 0;
}
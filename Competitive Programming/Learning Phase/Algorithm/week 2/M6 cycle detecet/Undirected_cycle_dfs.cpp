#include<bits/stdc++.h>
using namespace std;
vector<int> mat[105];
bool vis[105];
bool cycle;
int parent[105];
void dfs(int src)
{
    vis[src]=true;
    for(int child : mat[src])
    {
        if(vis[child] && parent[src]!=child)
            {
                cycle=true;
            }
        if(!vis[child])
        {
            parent[child]=src;
            dfs(child);
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
    memset(vis,false,sizeof(vis));
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
            dfs(i);
    }
    if(cycle)
        cout<<"Cycle Detected"<<endl;
            else
                cout<<"No Cycle"<<endl;
    return 0;
}
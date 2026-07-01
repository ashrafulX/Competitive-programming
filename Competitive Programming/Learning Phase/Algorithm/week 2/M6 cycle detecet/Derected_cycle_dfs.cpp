#include<bits/stdc++.h>
using namespace std;
vector<int> mat[105];
bool vis[105];
bool cycle;
bool path[105];
void dfs(int src)
{
    vis[src]=true;
    path[src]=true;
    for(int child : mat[src])
    {
        if(vis[child] && path[child])
        {
            cycle=true;
        }
        if(!vis[child])
        {
            dfs(child);
        }
    }
    path[src]=false;
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
    }
    memset(vis,false,sizeof(vis));
    memset(path,false,sizeof(path));
    cycle=false;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
            dfs(i);
    }
    if(cycle)
        cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
    return 0;
}
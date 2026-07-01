#include<bits/stdc++.h>
using namespace std;
vector<int> mat[105];
bool vis[105];
int n,e;
void dfs(int src)
{
    // cout<<src<<endl;
    vis[src]=true;
    for(int child : mat[src])
    {
        if(!vis[child])
            dfs(child);
    }
}
int main()
{
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
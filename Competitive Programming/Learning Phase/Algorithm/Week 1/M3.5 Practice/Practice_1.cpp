#include<bits/stdc++.h>
using namespace std;
const int N=105;
vector<int> mat[N];
bool vis[N];
int n,e;
void dfs(int src,int &count)
{
    // cout<<src<<endl;
    vis[src]=true;
    count++;
    for(int child : mat[src])
    {
        if(!vis[child])
        {
            dfs(child,count);
        }
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
    int src;
    cin>>src;
    memset(vis,false,sizeof(vis));
    int count=0;
    dfs(src,count);
    cout<<count<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
const int N=10e5;
vector<int> mat[N];
bool vis[N];
void dfs(int src)
{
    cout<<src<<" ";
    vis[src]=true;
    for(int child : mat[src])
    {
        if(!vis[child])
        {
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
    int src;
    cin>>src;
    dfs(src);
    return 0;
}
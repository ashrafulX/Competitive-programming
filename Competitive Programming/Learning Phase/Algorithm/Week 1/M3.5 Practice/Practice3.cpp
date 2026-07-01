#include<bits/stdc++.h>
using namespace std;
vector<int> mat[1005];
bool vis[1005];
void dfs(int src,int &count)
{
    // cout<<src<<endl;
    count++;
    vis[src]=true;
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
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int count=0;
        if(vis[i]==false)
        {
            dfs(i,count);
            v.push_back(count);
        }
    }
    sort(v.begin(),v.end());
    for(int x : v )
    {
        cout<<x<<" ";
    }
    return 0;
}
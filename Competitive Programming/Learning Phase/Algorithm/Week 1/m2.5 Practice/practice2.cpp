#include<bits/stdc++.h>
using namespace std;
vector<int> mat[1005];
int level[1005];
bool vis[1005];
void solve(int src,int lvl)
{
    vector<int> v;
    queue<int> q;
    q.push(src);
    vis[src]=true;
    level[src]=0;
    while(!q.empty())
    {
        int parent=q.front();
        q.pop();
        
        //now level wise print
        if(level[parent]==lvl)
        {
            v.push_back(parent);
        }

        for(int child : mat[parent])
        {
            if(!vis[child])
            {
                q.push(child);
                level[child]=level[parent]+1;
                vis[child]=true;
            }
        }
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int x : v)
    {
        cout<<x<<" ";
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
    int lvl;
    cin>>lvl;
    memset(level,-1,sizeof(level));
    memset(vis,false,sizeof(vis));
    solve(0,lvl);
    return 0;
}
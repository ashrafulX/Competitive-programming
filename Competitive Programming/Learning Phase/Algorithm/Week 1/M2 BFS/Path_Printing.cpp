#include<bits/stdc++.h>
using namespace std;
vector<int> mat[1005];
bool vis[1005];
int level[1005];
vector<int> v;
void solve(int src)
{
    queue<int> q;
    q.push(src);
        vis[src]=true;
        level[src]=0;
        v.push_back(src);
    while(!q.empty())
    {
        int parent=q.front();
        q.pop();

        //kaj


        for(int x : mat[parent])
        {
            if(vis[x]==false)
            {
                q.push(x);
                vis[x]=true;
                level[x]=level[parent]+1;
                v.push_back(x);
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
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    int src,des;
    cin>>src>>des;
    solve(src);
    // reverse(v.begin(),v.end());
    for(int x : v)
    {
        cout<<x<<" ";
    }
    return 0;
}
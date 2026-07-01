#include<bits/stdc++.h>
using namespace std;
vector<int> mat[1005];
bool vis[1005];
int level[1005];
void solve(int src,int des)
{
    
    queue<int> q;
    q.push(src);
    vis[src]=true;
    level[src]=0;
    while(!q.empty())
    {
        int parent=q.front();
        q.pop();

        for(int x : mat[parent])
        {
            if(vis[x]==false)
            {
                q.push(x);
                vis[x]=true;
                level[x]=level[parent]+1;
            }
        }
    }
    cout<<level[des]<<endl;

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
    int t;
    cin>>t;
    while(t--)
    {
        int src,des;
        cin>>src>>des;
        memset(vis,false,sizeof(vis));
        memset(level,-1,sizeof(level));
        solve(src,des);
    }
    
    return 0;
}
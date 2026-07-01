#include<bits/stdc++.h>
using namespace std;
vector<int> mat[1005];
bool vis[10005];
void solve(int src,int des)
{
    queue<int> q;
    q.push(src);
    vis[src]=true;

    while(!q.empty())
    {
        int parent=q.front();
        q.pop();

        for(auto x : mat[parent])
        {
            if(!vis[x])
            {
                q.push(x);
                vis[x]=true;
            }
        }
    }
    if(vis[des])
        cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
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
    int src,des;
    cin>>src>>des;
    solve(src,des);
    return 0;
}
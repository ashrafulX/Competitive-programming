#include<bits/stdc++.h>
using namespace std;
vector<long long int> adj_list[100005];
bool vis[100005];
long long int level[100005];
long long int parent[100005];

void bfs(long long int src)
{
    queue<long long int> q;
    q.push(src);
    vis[src] = true;
    level[src] = -1;

    while(!q.empty())
    {
        long long int par = q.front();
        q.pop();

        for(long long int child : adj_list[par])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
    }
}

int main()
{
    long long int n,e;
    cin >> n >> e;
    while(e--)
    {
        long long int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    memset(parent,-1,sizeof(parent));
    long long int src=1;
    long long int dst=n;
    bfs(src);
    if(level[dst]== -1)
    {
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    vector<long  long int> path;
    long long  int node = dst;
    while(node != -1)
    {
        path.push_back(node);
        node = parent[node];
    }
    if(path.empty())
    {
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    reverse(path.begin(),path.end());
    cout<<path.size()<<endl;
    for(long long int x : path)
    {
        cout << x << " ";
    }
    
    return 0;
}
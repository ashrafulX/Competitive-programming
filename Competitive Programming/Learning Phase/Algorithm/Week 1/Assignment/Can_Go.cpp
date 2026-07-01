#include <bits/stdc++.h>
using namespace std;

bool vis[1001][1001];
vector<pair<int,int>>d={{0,1},{0,-1},{-1,0},{1,0}};
int n,m;
char a[1001][1001];

bool valid(int i,int j) 
{
    if (i<0||i>=n||j<0||j>=m)
        return false;
    if (a[i][j]=='#')
        return false;
    return true;
}

void bfs(int aa,int bb) 
{
    queue<pair<int,int>>q;
    q.push({aa,bb});
    vis[aa][bb]=true;
    
    while (!q.empty()) 
    {
        pair<int,int>par=q.front();
        int a=par.first;
        int b=par.second;
        q.pop();
        
        for(int i=0;i<4;i++) 
        {
            int ci=a+d[i].first;
            int cj=b+d[i].second;
            if (valid(ci,cj)&&!vis[ci][cj]) 
            {
                q.push({ci,cj});
                vis[ci][cj]=true;
            }
        }
    }
}

int main() 
{
    cin>>n>>m;
    
    for(int i=0; i < n; i++) 
    {
        for (int j=0;j<m;j++) 
        {
            cin>>a[i][j];
        }
    }
    
    int aa,bb,cc,dd;
    for (int i=0;i<n;i++) 
    {
        for(int j = 0; j < m; j++) 
        {
            if (a[i][j] == 'A') 
            {
                aa = i;
                bb = j;
            } 
                else if (a[i][j] == 'B') 
            {
                cc = i;
                dd = j;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    bfs(aa, bb);
    if (vis[cc][dd]) 
    {
        cout << "YES\n";
    } 
    else 
    {
        cout << "NO\n";
    }
    
    return 0;
}
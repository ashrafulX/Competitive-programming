#include<bits/stdc++.h>
using namespace std;
const int N=105;
char grid[N][N];
bool vis[N][N];
int n,m;
vector<pair<int,int>> p={{-1,0},{1,0},{0,-1},{0,1}};
bool valid(int i,int j)
{
    if(i >= n || j>=m || i<0 || j<0)
        return false;
            else
                return true;
}
void dfs(int si,int sj)
{
    cout<<si<<" "<<sj<<endl;
    vis[si][sj]=true;
    for(int i=0;i<4;i++)
    {
        int ci=p[i].first+si;
        int cj=p[i].second+sj;
        if(valid(ci,cj) ==true && !vis[ci][cj])
        {
            dfs(ci,cj);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    int si,sj;
    cin>>si>>sj;
    memset(vis,false,sizeof(vis));
    dfs(si,sj);
    return 0;
}
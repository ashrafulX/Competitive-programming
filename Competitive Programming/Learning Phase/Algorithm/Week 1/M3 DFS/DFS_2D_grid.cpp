#include<bits/stdc++.h>
using namespace std;
int n,m;
char mat[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> v={{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int i,int j)
{
    if(i<0 || j<0 || n<=i || m<=j)
        return false;
            else
                return true;
}
void grid(int si,int sj)
{
    cout<<si<<" "<<sj<<endl;
    vis[si][sj]=true;
    for(int i=0;i<v.size();i++)
    {   
        int ci=si+v[i].first;
        int cj=sj+v[i].second;
        if(valid(ci,cj)==true && vis[ci][cj]==false)
        {
            grid(ci,cj);
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
            cin>>mat[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    int si,sj;
    cin>>si>>sj;
    grid(si,sj);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
bool vis[1000][1000];
char a[1000][1000];
int n,m;
vector<pair<int,int>>d={{0,1}, {0,-1},{-1,0},{1,0}};

bool cmp(int i,int j) 
{
    return(i>=0&&i<n&&j>=0&&j<m&&a[i][j]!='#'&&!vis[i][j]);
}

void bfs(int si,int sj) 
{
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    
    while(!q.empty()) 
    {
        pair<int,int>parent=q.front();
        int a=parent.first,b =parent.second;
        q.pop();
        
        for (int i=0;i<4;i++) 
        {
            int ci=a+d[i].first;
            int cj=b+d[i].second;
            if (cmp(ci, cj)) 
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
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<m;j++) 
        {
            cin>>a[i][j];
            vis[i][j]=false;
        }
    }

    int apt=0;
    for(int i=0;i<n;i++) 
    {
        for (int j=0;j<m;j++) 
        {
            if (a[i][j]=='.'&&!vis[i][j]) 
            {
                bfs(i,j);
                apt++;
            }
        }
    }
    cout<<apt<<endl;

    return 0;
}
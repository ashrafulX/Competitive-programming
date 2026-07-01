#include <bits/stdc++.h>
using namespace std;

bool vis[1000][1000];
char a[1000][1000];
int n,m;
vector<pair<int,int>>d={{0,1}, {0,-1},{-1,0},{1,0}};

bool valid(int i,int j) 
{
    return (i>=0&&i<n&&j>=0&&j<m&&a[i][j]!='#'&&!vis[i][j]);
}

int bfs(int aa,int sj) 
{
    queue<pair<int,int>>q;
    q.push({aa,sj});
    vis[aa][sj]=true;
    int room = 0;

    while(!q.empty()) 
    {
        pair<int,int>parent=q.front();
        int a=parent.first,b =parent.second;
        q.pop();
        room++;

        for (int i=0;i<4;i++) 
        {
            int ci=a+d[i].first;
            int cj=b+d[i].second;
            if (valid(ci, cj)) 
            {
                q.push({ci,cj});
                vis[ci][cj]=true;
            }
        }
    }
    return room;
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

    vector<int>apt;
    for(int i=0;i<n;i++) 
    {
        for (int j=0;j<m;j++) 
        {
            if (a[i][j]=='.'&&!vis[i][j]) 
            {
                int room=bfs(i,j);
                apt.push_back(room);
            }
        }
    }

    sort(apt.begin(),apt.end());
    for(int ap:apt) 
    {
        cout<<ap<<" ";
    }
    if(apt.empty())
    {
        cout<<"0";
    }
    cout<<endl;

    return 0;
}
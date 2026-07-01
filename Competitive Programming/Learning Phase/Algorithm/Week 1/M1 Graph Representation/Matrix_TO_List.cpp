#include<bits/stdc++.h>
using namespace std;
void solve(int mat[][100],int n)
{
    vector<int> adj[n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]==1 && i!=j)
            {
                adj[i].push_back(j);
                
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<i<<" -> ";
        for(int j=0;j < adj[i].size();j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    int mat[100][100];
    memset(mat,0,sizeof(mat));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                mat[i][j]=1;
            }
        }
    }

    while(e--)
    {
        int a,b;
        cin>>a>>b;
        mat[a][b]=1;
        mat[b][a]=1;
    }

    solve(mat,n);
    return 0;
}
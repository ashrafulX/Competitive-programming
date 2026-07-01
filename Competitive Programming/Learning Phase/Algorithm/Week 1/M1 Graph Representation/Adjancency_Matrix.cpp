//undirected
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    int adj_mat[n][n];
    //  for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         adj_mat[i][j]=0;
    //         if(i==j)
    //         {
                    //Dioagonally 1 kore dissi
    //             adj_mat[i][j]=1;
    //         }
    //     }
    // }
    memset(adj_mat,0,sizeof(adj_mat));
    
    //Diagonally 1 kore dibo
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                adj_mat[i][j]=1;
            }
        }
    }
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adj_mat[a][b]=1;
        adj_mat[b][a]=1;  //this line remove for directed
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<adj_mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
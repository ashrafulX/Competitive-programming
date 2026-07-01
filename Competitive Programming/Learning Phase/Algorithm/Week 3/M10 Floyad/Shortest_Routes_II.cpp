#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    int t;
        cin>>t;
    long long mat[n][n];
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                mat[i][j]=0;
                else
                    mat[i][j]=LLONG_MAX;
            }
        }
        while(e--)
        {
            long long a,b,c;
            cin>>a>>b>>c;
            mat[a][b]=c;
            mat[b][a]=c;
        }
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(mat[i][k] != LLONG_MAX && mat[k][j] != LLONG_MAX && mat[i][k] + mat[k][j] < mat[i][j])
                    {
                        mat[i][j]=mat[i][k] + mat[k][j];
                    }
                }
            }
        }
        
        while(t--)
        {
            int a,b;
            cin>>a>>b;
            if(mat[a][b]==LLONG_MAX)
                cout<<"-1"<<endl;
                else
                    cout<<mat[a][b]<<endl;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
    vector<pair<int, int>>d={{-1, -2},{-2,-1},{-2,1},{-1,2},{1,-2},{2,-1},{2,1},{1,2}};
    bool valid(int i,int j,int n,int m) 
    {
        if(i<0 || j<0 || i>=n || j>=m )
            return false;
                else
                    return true;
    }

int solve(int kx,int ky,int qx,int qy,int n,int m) 
{

    vector<vector<int>>dist(n,vector<int>(m, -1));
    queue<pair<int,int>>q;
    q.push({kx,ky});
    dist[kx][ky]=0;

    while(!q.empty()) 
    {
        pair<int,int>curr=q.front();
        q.pop();

        if(curr.first==qx && curr.second==qy)
            return dist[curr.first][curr.second];

        for (auto direction : d) 
        {
            int new_x=curr.first+direction.first;
            int new_y =curr.second+direction.second;

            if (valid(new_x, new_y, n, m) && dist[new_x][new_y] == -1) 
            {
                q.push({new_x, new_y});
                dist[new_x][new_y] = dist[curr.first][curr.second] + 1;
            }
        }
    }

    return -1; 
}
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n,m,kx,ky,qx,qy;

        cin>>n>>m >>kx>>ky>>qx>>qy;

        int steps=solve(kx,ky,qx,qy,n,m);
        cout<<steps<<endl;
    }

    return 0;
}
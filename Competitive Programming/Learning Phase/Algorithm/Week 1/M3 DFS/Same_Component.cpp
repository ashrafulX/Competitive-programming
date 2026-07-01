#include<bits/stdc++.h>
using namespace std;
char grid[105];
bool vis[105][105];
int n,m;
vector<pair<int,int>> d={{-1,0},{1,0},{0,-1},{0,1}};
bool valid(int i,int j)
{
    if(i<0 || j<0 || i>=n ||j>=m)
    return false;
        else
            return true;
}
int main()
{
    
    return 0;
}
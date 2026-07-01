/* Question: You will be given an undirected graph as input. Then you will be given a node N. 
You need to print the number of nodes that are directly connected to the node N. */
#include<bits/stdc++.h>
using namespace std;
const int N=10e5;
vector<int> mat[N];
bool vis[N];
void solve(int src)
{
    int flag=0;
    // for(int child : mat[src])
    // {
    //    flag++;
    // }
    
    for(int i=0;i<mat[src].size();i++)
    {
        flag++;
    }   
    cout<<flag<<endl;
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int src;
    cin>>src;
    solve(src);
    return 0;
}
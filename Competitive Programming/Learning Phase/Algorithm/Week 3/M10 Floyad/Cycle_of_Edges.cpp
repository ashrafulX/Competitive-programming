#include<bits/stdc++.h>
using namespace std;
const int N=100005;
int par[N];
int group_size[N];
int find(int node) {
    if(par[node] == -1) 
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void solve(int node1, int node2)
{
    int leader1=find(node1);
    int leader2=find(node2);
    if( leader1 != leader2)
    {
        if(group_size[leader1] >= group_size[leader2])
        {
            par[leader2]=leader1;
            group_size[leader1]= group_size[leader1]+group_size[leader2];
        }
        else
            {
                par[leader1]=leader2;
                group_size[leader2]=group_size[leader2]+group_size[leader1];
            }
        
    }
}
int main()
{
    memset(par, -1, sizeof(par));
    memset(group_size, 1, sizeof(group_size));
    int n,e;
    cin>>n>>e;
    int cycle=0;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        int leader1=find(a);
        int leader2=find(b);
        if(leader1==leader2)
        {
            cycle++;
        }
        else
        {
            solve(a,b);
        }
    }
    cout<<cycle<<endl;
    return 0;
}
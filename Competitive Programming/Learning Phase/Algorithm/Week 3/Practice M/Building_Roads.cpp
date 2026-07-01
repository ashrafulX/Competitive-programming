#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int par[N];
int group_size[N];
int find(int node)
{
    if(par[node]== -1)
    {
        return node;
    }
    int leader=find(par[node]);
    par[node]=leader;
    return leader;
}
void dsu(int a, int b)
{
    int leaderA=find(a);
    int leaderB=find(b);
    if(group_size[leaderA] >= group_size[leaderB])
    {
        par[leaderB]=leaderA;
        group_size[leaderA]+=group_size[leaderB];
    }
    else
    {
        par[leaderA]=leaderB;
        group_size[leaderB]+=group_size[leaderA];
    }
}
int main()
{
    memset(par, -1 , sizeof(par));
    // memset(group_size, 1, sizeof(group_size));
    for(int i=0;i<N;i++)
    {
        group_size[i]=1;
    }
    int n,e;
    cin>>n>>e;
    vector<int> v;
    int cnt=0;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        int leaderA=find(a);
        int leaderB=find(b);
        if(leaderA != leaderB)
        {
            dsu(a,b);
        }
    }
    for(int i=1;i<=n;i++)
    {
        int a=find(1);
        int b=find(i);
        if(find(a) != find(b))
        {
            dsu(1,b);
            cnt++;
            v.push_back(b);
        }
    }
    cout<<cnt<<endl;

    for(auto x : v)
    {
        cout<<"1"<<" "<<x<<endl;
    }
    return 0;
}
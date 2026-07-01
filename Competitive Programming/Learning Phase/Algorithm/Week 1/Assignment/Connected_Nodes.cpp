#include<bits/stdc++.h>
using namespace std;
const int N=10e5;
vector<int> mat[N];

bool vis[N];

void solve(int src)
{
    vector<int> v;
    for(int child : mat[src])
    {
        v.push_back(child);
    }
    if(v.empty())
        cout<<"-1"<<endl;
        else
            {
                sort(v.begin(),v.end(),greater<int>());
                for(int node : v)
                {
                    cout<<node<<" ";
                }
                cout<<endl;
            }
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
    int t;
    cin>>t;
    while(t--){
        memset(vis,false,sizeof(vis));
        int src;
        cin>>src;
        solve(src);
    }
    return 0;
}
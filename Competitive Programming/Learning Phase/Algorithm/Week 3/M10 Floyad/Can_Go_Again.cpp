#include<bits/stdc++.h>
using namespace std;
class Edge
{
    public:
    int a,b,c;
    Edge(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
};
int n,e;
vector<Edge> mat;
long long dis[1010];
bool cycle;

void Takla_Man(int src)
{
    cycle=false;
    for(int i=0;i<=n;i++) 
    {
        dis[i]=LLONG_MAX; 
    }
    dis[src]=0;
    for(int i=0;i<n-1;i++) 
    {
        for(auto ed : mat)
        {
            int a,b,c;
            a=ed.a;
            b=ed.b;
            c=ed.c;
            if(dis[a] != LLONG_MAX && dis[a]+c <dis[b])
            {
                dis[b]=dis[a]+c;
            }
        }
    }
    for(auto ed : mat)
    {
        int a,b,c;
        a=ed.a;
        b=ed.b;
        c=ed.c;
        if(dis[a] != LLONG_MAX && dis[a]+c <dis[b])
            {
               cycle=true;
               return;
            }
        
    }
    // if(cycle)
    // {
    //     cout<<"Negative Cycle Detected"<<endl;
    //     return;
    // }
}
int main()
{
    cin>>n>>e;
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        mat.push_back(Edge(a,b,c));
    }
    int src;
    cin>>src;
    Takla_Man(src);
    
    if(cycle)
    {
        cout<<"Negative Cycle Detected"<<endl;
    }
    else
    {
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if(dis[a] == LLONG_MAX)
        {
            cout<<"Not Possible"<<endl;
        }
        else
            cout<<dis[a]<<endl;
    }
    }
    return 0;
}
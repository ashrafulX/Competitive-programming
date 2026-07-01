#include<bits/stdc++.h>
using namespace std;
int n,e;
class Edge
{
    public:
    int a,b,c;
    Edge(int a, int b, int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
};
vector<Edge> v;
int dis[105];
void Bellmanford()
{
    for(int i=0;i<n-1;i++ )
    {
        for(auto ed : v)
        {
            int a,b,c;
            a=ed.a;
            b=ed.b;
            c=ed.c;
            if(dis[a]!= INT_MAX && dis[a]+c < dis[b])
            {
                dis[b]=c+dis[a];
            }
        }
    }
}

int main()
{
    cin>>n>>e;
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        v.push_back(Edge(a,b,c));
    }
    for(int i=0;i<sizeof(dis); i++)
    {
        dis[i]=INT_MAX;
    }
    dis[0]=0;
    Bellmanford();
    for(int i=0;i<n;i++)
    {
        cout<<dis[i]<<" ";
    }
    return 0;
}
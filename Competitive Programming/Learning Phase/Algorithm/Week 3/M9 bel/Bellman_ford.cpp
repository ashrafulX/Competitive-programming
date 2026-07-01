#include<bits/stdc++.h>
using namespace std;

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
int n,e;
vector<Edge> matList;
int dis[105];
void bellman_ford()
{
    int tmp=n-1;
    while(tmp--)
    {
            for(auto ed : matList)
            {
                int a,b,c;
                a=ed.a;
                b=ed.b;
                c=ed.c;
                if(dis[a] != INT_MAX && dis[a]+c<dis[b])
                {
                    dis[b]=dis[a]+c;
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
        matList.push_back(Edge(a,b,c));
    }

    for(int i=0;i<105;i++)
    {
        dis[i]=INT_MAX;
    }
    dis[0]=0;
    bellman_ford();
    for(int i=0;i<n;i++)
    {
        cout<<dis[i]<<" ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //queue<int> q;
    //priority queue has no back.. front
    //called as a top.

    //max value
    priority_queue<int> pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        pq.push(x);
    }
    cout<<pq.top()<<endl;


    //Min Value
    priority_queue<int,vector<int>,greater<int>> min_pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        min_pq.push(x);
    }
    cout<<min_pq.top()<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    stack<int> st;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }
    queue<int> q;
    for(int i=0;i<m;i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }
    if(n != m)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        bool same=true;
        while(!st.empty() && !q.empty())
        {
            if(st.top() != q.front())
            {
                same=false;
                break;
            }
            st.pop();
            q.pop();
        }
        if(same)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
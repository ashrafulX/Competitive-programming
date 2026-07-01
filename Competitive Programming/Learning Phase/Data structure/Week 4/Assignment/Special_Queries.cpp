#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    queue<string> q;
    while(t--)
    {
        int sudo;
        cin>>sudo;
        if(sudo==0)
        {
            string name;
            cin>>name;
            q.push(name);
        }
        else if(sudo ==1 )
        {
            if(!q.empty())
            {
                cout<<q.front()<<endl;
                q.pop();
            }
            else
            {
                cout<<"Invalid"<<endl;
            }
        }
    }
    return 0;
}
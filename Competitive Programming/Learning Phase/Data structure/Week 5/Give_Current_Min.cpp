#include <bits/stdc++.h>
using namespace std;

void check(long long int a,vector<int>& v,priority_queue<int,vector<int>,greater<int>>& p) 
{
    if (a == 0) 
    {
        if (!v.empty()) 
        {
            cout<<p.top()<<endl;
        } else 
        {
            cout<<"Empty"<<endl;
        }
    } else if(a==1) 
    {
        if(!v.empty()) 
        {
            cout<<p.top()<<endl;
        } 
        else 
        {
            cout<<"Empty"<<endl;
        }
    } 
    else if (a == 2) 
    {
        if (!v.empty()) {
            auto it=find(v.begin(),v.end(),p.top());
            v.erase(it);
            p.pop();
            if (!v.empty()) 
            {
                cout<<p.top()<<endl;
            } 
            else 
            {
                cout<<"Empty"<<endl;
            }
        }
        else 
        {
            cout<<"Empty"<<endl;
        }
    }
}

int main() 
{
    int n;
    cin>>n;
    
    vector<int>v;
    priority_queue<int,vector<int>,greater<int>>p;
 
    while(n--) 
    {
        long long int x;
        cin>>x;
        v.push_back(x);
        p.push(x);
    }

    int q;
    cin >> q;
    
    while (q--) 
    {
        int a;
        cin>>a;
        
        if(a==0) 
        {
            long long int x;
            cin>>x;
            v.push_back(x);
            p.push(x);
        }
        
        check(a,v,p);
    }
}
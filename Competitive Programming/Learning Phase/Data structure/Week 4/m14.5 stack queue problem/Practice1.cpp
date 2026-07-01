// Question: Take two stacks of size N and M as input and check if both of them are the same or not. 
// Don’t use STL stack to solve this problem.

// Sample Input
// Sample Output
// 5
// 10 20 30 40 50
// 5
// 10 20 30 40 50
// YES
// 5
// 10 20 30 40 50
// 4
// 10 20 30 40
// NO
// 5
// 10 20 30 40 50
// 5
// 50 40 30 20 10
// NO
#include<bits/stdc++.h>
using namespace std;
class Mystack
{
    private:
    vector<int> v;
    public:
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
int main()
{
    int n;
    cin>>n;
    Mystack st1,st2;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st1.push(x);
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        st2.push(x);
    }

    if(n==m)
    {
        bool same=true;
        while(!st1.empty() && !st2.empty())
        {
            if(st1.top() != st2.top())
            {
                same=false;
                break;
            }
            st1.pop();
            st2.pop();
        }
        if(same)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
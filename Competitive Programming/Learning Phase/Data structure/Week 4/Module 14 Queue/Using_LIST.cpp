#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL; //initiali shob next NULL kore diyechi
        this->prev=NULL;
    }

};
class Myqueue
{
    public:
    list<int> l;
    int sz=0;
    void push(int val)
    {
       l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int back()
    {
        return l.back();
    }
    int size()
    {
        return l.size();;
    }
    bool empty()
    {
        return l.empty();
    }

};
int main()
{
    int n;
    cin>>n;
    Myqueue st;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    cout<<"Before POP "<<st.size()<<endl;
    while(!st.empty())
    {
        cout<<st.front()<<endl;
        st.pop();
    }
    cout<<"After Pop "<<st.size()<<endl;
    
    return 0;
}
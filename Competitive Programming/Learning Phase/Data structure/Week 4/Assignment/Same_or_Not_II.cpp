#include<bits/stdc++.h>
using namespace std;
class Mystack
{
    public:
    vector<int> v;
    
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
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }

};
class Myqueue
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int size=0;
    
    void push(int val)
    {
        size++;
        Node* newnode=new Node(val);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        tail=newnode;
    }
    
    void pop()
    {
        size--;
        Node* deletenode=head;
        head=deletenode->next;
        delete deletenode;
        if(head==NULL)
        {
            tail=NULL;
        }
    }
    
    int front()
    {
        return head->val;
    }
    
    int back()
    {
        return tail->val;
    }
    
    int sz()
    {
        return size;
    }
    
    bool empty()
    {
        if(head==NULL)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};
int main()
{
    Myqueue q;
    Mystack st;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }

    for(int i=0;i<m;i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }
     if(n!=m)
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
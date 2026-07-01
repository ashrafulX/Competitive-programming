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
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        Node* newnode= new Node(val);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
    void pop()
    {
        sz--;
        Node*  deletenode=head;
        head=head->next;
        delete deletenode;
        if(head==NULL)
        {
            tail=NULL;
            return;
        }
        head->prev=NULL;
    }
    int front()
    {
        return head->val;
    }
    int back()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(head==NULL)
        {
            return true;
        }
        else{
            return false;
        }
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
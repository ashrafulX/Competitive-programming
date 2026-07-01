#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL; //initiali shob next NULL kore diyechi
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
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    cout<<"Before Pop "<<q.sz()<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    cout<<"After PoP "<<q.sz()<<endl;
    return 0;
}
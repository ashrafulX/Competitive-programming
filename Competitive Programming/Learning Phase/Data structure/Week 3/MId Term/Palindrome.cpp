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
        this->next=NULL;
        this->next=NULL;
    }

};
void insert_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode=new Node(val);
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
bool pal(Node* head,Node* tail)
{
    Node* right=head;
    Node* left=tail;
    while(right != NULL && left != NULL)
    {
        if(right->val != left->val)
        {
            return false;
        }
        right=right->next;
        left=left->prev;
    }
    return true;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    while(1)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head,tail,val);
    }
    if(pal(head,tail)==true)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}
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
void insert_tail(Node* &head,Node* &tail,int val)
{
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
void print(Node* head)
{
    Node* tmp=head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
void rev_print(Node* tail)
{
    Node* tmp=tail;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
}
void deletenode_any_pos(Node* &head,int pos)
{
    Node* tmp=head;
    for(int i=1;i<pos;i++)
    {
        tmp=tmp->next;
    }
    Node* deletenode=tmp->next;
    deletenode->next->prev=tmp;
    tmp->next=deletenode->next;
    delete deletenode;
    
}
void delete_tail(Node* &tail,Node* &head)
{
    Node* deletenode= tail;
    tail=tail->prev;
    delete deletenode;
    if(tail==NULL)
    {
        head=NULL;
        return;
    }
    tail->next=NULL;
}
void delete_head(Node* &head,Node* &tail)
{

    Node* deletenode= head;
    head=head->next;
    delete deletenode;
    if(head==NULL)
    {
        tail=NULL;
        return;
    }
    head->prev=NULL;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    while(1)
    {
        int val;
        cin>>val;
        if(val== -1)
        {
            break;
        }
        insert_tail(head,tail,val);
    }
    // deletenode(head,2);
    // delete_tail(tail,head);
    delete_head(head,tail);
    print(head);
    cout<<endl;
    rev_print(tail);
    
    return 0;
}
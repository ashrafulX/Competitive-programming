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
        this->prev=NULL;
    }

};
int list_size(Node* head)
{
    Node* tmp=head;
    int cnt=0;
    while(tmp != NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void insert_head(Node* &head,Node* &tail,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;

}
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
void insert_any(Node* &head,Node* &tail,int pos,int val)
{
    Node* newnode=new Node(val);
    Node* tmp=head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    if(tmp->next !=NULL)
    {
        tmp->next->prev=newnode;
    }
    tmp->next=newnode;
    newnode->prev=tmp;
    if(newnode->next==NULL) 
    {
        tail=newnode;
    }
    // tmp->next=newnode;
    // newnode->next->prev=newnode;
    // newnode->prev=tmp;

}
void print(Node* head)
{
    Node* tmp=head;
    cout<<"L -> ";
    while(tmp!= NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void rev_print(Node* tail)
{
    Node* tmp=tail;
    cout<<"R -> ";
    while(tmp!= NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int q;
    cin>>q;
    while(q--)
    {
        int size=list_size(head);
        int val,index;
        cin>>index>>val;
        if(index<0 || index>size)
        {
            cout<<"Invalid"<<endl;
        }
        else if(index==0)
        {
            insert_head(head,tail,val);
            print(head);
            rev_print(tail);
        }
        else if(index==size)
        {
            insert_tail(head,tail,val);
            print(head);
            rev_print(tail);
        }
        else{
            insert_any(head,tail,index,val);
            print(head);
            rev_print(tail);
        }

    }
    return 0;
}
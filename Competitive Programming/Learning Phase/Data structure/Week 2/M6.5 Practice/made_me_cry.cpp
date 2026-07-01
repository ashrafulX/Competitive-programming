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
        this->next=NULL;
    }

};

void insert_at_Head(Node* &head,int val)
{
    Node* newnode= new Node(val);
    newnode->next=head;
    head=newnode;

}


void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    
    tail->next=newnode;
    // tail=tail->next;
    tail=newnode;
}
// void Insert_any_position(Node* &head,int pos, int val)
// {
//     Node* newnode= new Node(val);
//     Node* tmp=head;
//     for(int i=1;i<pos;i++)
//     {
//         tmp=tmp->next;
//     }
//     newnode->next=tmp->next;
//     tmp->next=newnode;

// }
void delete_any_pos(Node* &head,int pos)
{
    Node* tmp=head;
    for(int i=1;i<pos;i++)
    {
        tmp=tmp->next;
    }
    Node* deletenode=tmp->next;
    tmp->next=deletenode->next;
    delete deletenode;
}
void print(Node* &head)
{
    Node* tmp=head;
    while( tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int t;
    cin>>t;
    while(t--)
    {
        int idx;
        int val;
        cin>>idx>>val;
        if(idx==0)
        {
            insert_at_Head(head,val);
            print(head);
        }
        else if(idx==1)
        {
            insert_at_tail(head,tail,val);
            print(head);
        }
        else if(idx==2)
        {
            delete_any_pos(head,val);
            print(head);
        }
    }
    return 0;
}
//this problem made me cry

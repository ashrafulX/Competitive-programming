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
void rev_print(Node* tail)
{
    Node* tmp=tail;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
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
void insert_head(Node* &head,Node* &tail, int val)
{
    Node* newnode= new Node(val);
    // head->prev=newnode; //why its doesnt work.
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
// void insert_any_pos(Node* head,int pos,int val)
// {
//     Node* newnode= new Node(100);
//     Node* tmp=head;
//     for(int i=1;i<pos;i++)
//     {
//         tmp=tmp->next;
//     }
//     newnode->next=tmp->next; //newnode er next e giye tmp er next ghor ta bosale tmp er porer value link hobe.
//     tmp->next=newnode; //tmp->next  ghore newnode link kore di
//     newnode->next->prev=newnode; //newnode.er next  e jabo skhan theke sei ghore prev ke connect korbe newnode diye
//     newnode->prev=tmp; //newnode prev e tmp ke rkahbo
// }
void insert_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode= new Node(val);
    if(tail==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}

int main()
{
    Node* head=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* tail=d;
    head->next=b;
    b->next=c;
    c->next=d;
    b->prev=head;
    c->prev=b;
    d->prev=c;
    // insert_any_pos(head,2,100);
    // insert_head(head,tail,1000);
    insert_tail(head,tail,999);
    print(head);
    cout<<endl;
    rev_print(tail);

    return 0;
}
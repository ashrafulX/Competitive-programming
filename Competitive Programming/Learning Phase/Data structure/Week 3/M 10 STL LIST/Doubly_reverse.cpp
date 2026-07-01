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
    Node* newnode=new Node(val);
    if(head ==NULL)
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
void doubly_reverse(Node* head,Node* tail)
{
    Node* i=head;
    Node* j=tail;
    while(i != j && i->next != j)
    {
        swap(i->val,j->val);
        i=i->next;
        j=j->prev;
    }
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    while(1)
    {
        int val;
        cin>>val;
        if(val == -1)
        {
            break;
        }
        insert_tail(head,tail,val);
    }
    doubly_reverse(head,tail);
    print(head);
    return 0;
}
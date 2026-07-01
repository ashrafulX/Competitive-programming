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
void Doubly_reverse_list(Node* &head,Node* &tail)
{
    Node* i;
    Node* j;
    i=head;
    j=tail;
    while(i != j && i->prev != j)
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
        if(val== -1)
        {
            break;
        }
        insert_tail(head,tail,val);
    }
    Doubly_reverse_list(head,tail);
    print(head);
    cout<<endl;
    // cout<<head->val<<endl<<tail->val;
    // rev_print(tail);
    return 0;
}
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
void rev_printf(Node* tail)
{
    Node* tmp=tail;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
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
    rev_printf(tail);

    return 0;
}
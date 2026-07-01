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
void Insert_any_position(Node* &head,int pos, int val)
{
    Node* newnode= new Node(val);
    Node* tmp=head;
    for(int i=1;i<pos;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;

}
void Print(Node* head)
{
    Node* tmp=head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
int main()
{
    Node* head= new Node(10);
    Node* a= new Node(20);
    Node* c= new Node(40);
    head->next=a;
    a->next=c;
    Insert_any_position(head,2,30);
    Print(head);
    

    return 0;
}
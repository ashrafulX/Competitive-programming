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


void Insert_at_Tail(Node* &head,int val)
{
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    Node* temp=head;
    while(temp->next !=NULL)
    {
        temp=temp->next;

    }
    temp->next=newnode;
}

void Print_Linked_List(Node* head)
{
    Node* temp=head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main()
{
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    
    //link the node
    head->next=a;
    a->next=b;

    //INSERT AT Tail
    Insert_at_Tail(b,100);
    Insert_at_Tail(b,100);
    

    //PRINT LINKED LIST
    Print_Linked_List(head);


    return 0;
}
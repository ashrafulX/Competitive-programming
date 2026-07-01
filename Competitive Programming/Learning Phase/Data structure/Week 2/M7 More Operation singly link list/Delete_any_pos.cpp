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
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode= new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    tail->next=newnode;
    tail=newnode;

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
// void print(Node* tmp)
// {
//     if(tmp->next==NULL)
//     {
//         return;
//     }
//     cout<<tmp->val<<" ";
//     print(tmp->next);
// }
void delete_any_pos(Node* &head,int pos)
{
    Node* tmp=head;
    for(int i=1;i<pos;i++)
    {
        tmp=tmp->next;
    }
    Node* deletenode=tmp->next; //delete node e jetate delete korte cassi seta ke rekhe dissi.
    tmp->next=deletenode->next;//
    // tmp->next=tmp->next->next;
    delete deletenode;
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
        insert_at_tail(head,tail,val);
    }
    // print(head);
    delete_any_pos(head,3);
    Print_Linked_List(head);
    return 0;
}
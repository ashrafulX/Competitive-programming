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
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode= new Node(val);
    Node* tmp= head;
    if(head == NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
// void print(Node* &head)
// {
//     Node* tmp=head;
//     while( tmp != NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp=tmp->next;
//     }
// }
bool comp(Node* head,Node* head2)
{
    while(head != NULL && head2 != NULL)
    {
        if(head->val != head2->val)
        {
            return false;
        }
        head=head->next;
        head2=head2->next;
    }
    if(head == NULL && head2 == NULL)
    {
        return true;
    }
    else
    {
        return false;
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
            insert_at_tail(head,tail,val);
        }
    Node* head2=NULL;
    Node* tail2=NULL;
     while(1)
        {
            int val;
            cin>>val;
            if(val == -1)
            {
                break;
            }
            insert_at_tail(head2,tail2,val);
        }
        if(comp(head,head2)==true)
        {
            cout<<"YES"<<endl;
        }    
        else {
            cout<<"NO"<<endl;
        }
    return 0;
}


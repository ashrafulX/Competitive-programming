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
void print(Node* head)
{
    Node* tmp=head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
void delete_duplicate(Node* &head)
{
    if(head==NULL)
    {
        return;
    }
    Node* temp=head;
    while(temp != NULL)
    {
        Node* temp2=temp;
        Node* temp3=temp->next;
        while(temp3 != NULL)
        {
            if(temp3->val ==temp->val)
            {
                temp2->next=temp3->next;
            }
            else
            {
                temp2=temp3;
            }
            temp3=temp3->next;
        }
        temp=temp->next;
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
        insert_at_tail(head,tail,val);
    } 
    
    delete_duplicate(head);
    print(head);
    return 0;
}
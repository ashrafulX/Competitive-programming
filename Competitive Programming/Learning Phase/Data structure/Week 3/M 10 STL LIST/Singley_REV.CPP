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
void reverse_singly(Node* &head,Node* cur,Node* &tail)
{
    if(cur->next==NULL)
    {
        head=cur;
        return;
    }
    reverse_singly(head,cur->next,tail);
    cur->next->next=cur;
    cur->next=NULL;
    tail=cur;
    
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
    reverse_singly(head,head,tail);
    print(head);
    cout<<endl;
    cout<<head->val;
    cout<<" "<<tail->val;
    return 0;
}
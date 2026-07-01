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
void insert_at_tail(Node* &head,Node* &tail, int val)
{
    Node* newnode= new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
int check_duplicate(Node* head)
{
    int flag=0;
    Node* tmp=head;
    for(Node* i=head;i->next != NULL;i=i->next)
    {
        for(Node* j=i->next; j != NULL;j=j->next)
        {
            if(i->val == j->val)
            {
                flag=1;
                break;
            }
        }
    }
    return flag;
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
    int flag= check_duplicate(head);
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
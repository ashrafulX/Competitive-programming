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
void Insert_at_Head(Node* &head,int val)
{
    Node* newnode= new Node(val);
    newnode->next=head;
    head=newnode;

}
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
void print(Node* &head)
{
    Node* tmp=head;
    while( tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int count_linked_list(Node* &head)
{
    int cnt=0;
    Node* tmp=head;
    while(tmp != NULL)
    {
         tmp=tmp->next;
         cnt++;
    }
    return cnt;
}
int check_sort(Node* head)
{
    Node* tmp=head;
    int flag=1;
    while(tmp != NULL)
    {
        if(tmp->val > tmp->next->val)
        {
            flag=0;
            return flag;
            break;
        }
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
    
    int flag=check_sort(head);
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
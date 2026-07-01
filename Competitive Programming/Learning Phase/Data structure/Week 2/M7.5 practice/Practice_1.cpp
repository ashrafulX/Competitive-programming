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
    Node* newnode= new Node(val);
    if(head == NULL)
    {
        head=newnode;
        tail=newnode;
    }
    tail->next=newnode;
    tail=newnode;
}
void print(Node* head)
{
    Node* temp=head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int count_list(Node* head)
{
    Node* temp=head;
    int cnt=0;
    while(temp != NULL)
    {
        temp=temp->next;
        cnt++;
    }
    return cnt;

}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    while(1)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head,tail,val);
    } 
    Node* head1=NULL;
    Node* tail1=NULL;
    while(1)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head1,tail1,val);
    } 
    int cnt1=count_list(head);
    int cnt2=count_list(head1);
    if(cnt1 == cnt2)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
    // print(head);
    return 0;
}
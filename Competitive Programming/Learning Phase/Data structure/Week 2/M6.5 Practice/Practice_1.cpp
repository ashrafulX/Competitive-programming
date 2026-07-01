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
/**/
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
    int cnt=count_linked_list(head);
    cout<<cnt<<endl;
    return 0;
}
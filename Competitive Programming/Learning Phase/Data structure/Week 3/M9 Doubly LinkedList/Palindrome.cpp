#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL; //initiali shob next NULL kore diyechi
        this->prev=NULL;
    }

};
void insert_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode= new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
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
void check_pal(Node* head,Node* tail)
{
    Node* i=head;
    Node* j=tail;
    while(i != NULL && j != NULL && i != j && i->prev != j)
    {
        if(i->val != j->val)
        {
            cout << "NO" << endl;
            return;
        }
        i = i->next;
        j = j->prev;
    }
    
    cout << "YES" << endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    while(1)
    {
        int val;
        cin>>val;
        if( val == -1)
        {
            break;
        }
        insert_tail(head,tail,val);
    }
    // print(head);
    // check_pal(head,tail);
    vector<int> v;
    Node* tmp=head;
    while(tmp != NULL)
    {
        v.push_back(tmp->val);
        tmp=tmp->next;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"     ";
    }
    return 0;
}
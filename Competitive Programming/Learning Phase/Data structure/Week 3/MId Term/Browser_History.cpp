#include<iostream>
using namespace std;
class Node
{
    public:
    string name;
    Node* next;
    Node* prev;
    Node(string name)
    {
        this->name=name;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_at_tail(Node* &head,Node* &tail,string name)
{
    Node* newNode= new Node(name);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
bool find(Node* head,Node* &temp,string address)
{
    Node* temp1=head;
    while (temp1!=NULL)
    {
        if(temp1->name==address)
        {
            temp=temp1;
            return true;
        }
        temp1=temp1->next;
    }
    return false;
    
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    string name;
    while(true)
    {
        cin>>name;
        if(name=="end")
        {
            break;
        }
        insert_at_tail(head,tail,name);
    }
    int q;
    cin>>q;
    Node *temp=head;
    while(q--)
    {
        string command;
        cin>>command;
        if(command=="visit")
        {
            string address;
            cin>>address;
            if(find(head,temp,address))
            {
                cout<<address<<endl;
            }
            else{
                cout<<"Not Available"<<endl;
            }

        }
        else if(command=="next")
        {
            if(temp->next!=NULL)
            {
                cout<<temp->next->name<<endl;
                temp=temp->next;
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }
        else if(command=="prev")
        {
            if(temp->prev!=NULL)
            {
                cout<<temp->prev->name<<endl;
                temp=temp->prev;
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
     }
    }
}
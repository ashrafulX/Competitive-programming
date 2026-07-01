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
int main()
{
    Node* head=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);

    //connection
    head->next=b;
    b->next=c;
    c->next=d;
    d->next=b;

    //cycle Detecet
    Node* slow=head;
    Node* fast=head;
    bool flag=true;
    while(slow != NULL && fast->next != NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            flag=false;
            break;
        }


    }
    if(flag)
    {
        cout<<"No Cycle"<<endl;
    }
    else cout<<"cycle Found"<<endl;
    return 0;
}
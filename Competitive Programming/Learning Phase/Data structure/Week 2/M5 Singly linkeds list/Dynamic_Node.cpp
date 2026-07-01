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
    Node* head=new Node (10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);

    //connecting
    head->next=a;
    a->next=b;
    b->next=c;
    //printing
    cout<<head->val<<" "<<head->next->val<<" "<<head->next->next->val<<" "<<head->next->next->next->val<<endl;

    return 0;
}
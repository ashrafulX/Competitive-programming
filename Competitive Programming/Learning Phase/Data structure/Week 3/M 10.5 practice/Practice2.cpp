// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int>mylist;
//     int x;
//     while(cin>>x && x != -1)
//     {
//         mylist.push_back(x);
//     }
//     mylist.reverse();
//     for(int val : mylist)
//     {
//         cout<<val<<" ";
//     }
//     return 0;
// }
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
void rev_print(Node* tail)
{
    Node* tmp=tail;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
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
        insert_tail(head,tail,val);
    }
    rev_print(tail);
    
    return 0;
}
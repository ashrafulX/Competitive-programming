// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int>mylist1,mylist2;
//     int x;
//     while(cin>>x)
//     {
//         if(x== -1)
//         {
//             break;
//         }
//         mylist1.push_back(x);
//     }
//     int y;
//     while(cin>>y)
//     {
//         if(y== -1)
//         {
//             break;
//         }
//         mylist2.push_back(y);
//     }
//     if(mylist1 == mylist2)
//     {
//         cout<<"YES"<<endl;
//     }
//     else
//     {
//         cout<<"NO"<<endl;
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
bool comp(Node* head,Node* head1)
{
    Node* tmp=head;
    Node* tmp1=head1;
    while(tmp != NULL && tmp1 != NULL)
    {
        if(tmp->val != tmp1->val)
        {
            return false;
        }
        tmp=tmp->next;
        tmp1=tmp1->next;
    }

}
int size(Node* head)
{
    int cnt=0;
    Node* tmp=head;
    while(tmp != NULL)
    {
        cnt++;
        tmp=tmp->next;
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
        if(val == -1)
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
        if(val == -1)
        {
            break;
        }
        insert_tail(head1,tail1,val);
    }
    int size1=size(head);
    int size2=size(head1);
    if(size1 ==size2)
    {
        if(comp(head,head1)==false)
    {
        cout<<"NO"<<endl;
    }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}
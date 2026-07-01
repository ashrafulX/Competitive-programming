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
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
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
    Node* tmp=head;
    vector<int>v;
    while(tmp!= NULL)
    {
        v.push_back(tmp->val);
        tmp=tmp->next;
    }
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    int search;
    cin>>search;
    auto it=find(v.begin(),v.end(),search);
    if(search == *it)
    {
        cout<<"Got it"<<endl;
    }
    else{
        cout<<"NOOO"<<endl;
    }
    return 0;
}
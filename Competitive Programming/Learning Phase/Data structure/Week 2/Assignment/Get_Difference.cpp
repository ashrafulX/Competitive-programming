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
        this->next=NULL; 
    }

};

// void print(Node* &head)
// {
//     Node* tmp=head;
//     while( tmp != NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp=tmp->next;
//     }
// }
int find_max(Node* head)
{
    int max=INT_MIN;
    for(Node* i=head; i != NULL; i=i->next)
    {
        if(i->val > max)
        {
                max=i->val;
        }
 
    }
        return max;

}
int find_min(Node* head)
{
    int min=INT_MAX;
    for(Node* i=head; i != NULL ; i=i->next)
    {
        if(i->val<min)
        {
            min=i->val;
        }
    }
        return min;

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
    if( head == tail)
    {
        cout<<"0"<<endl;
    }
    else{
        int min=find_min(head);
        int max=find_max(head);
        // cout<<min<<" "<<max<<endl;
        int diff= max-min;
        cout<<diff<<endl;
    }
    // print(head);
   // cout<<find_min(head)<<endl;
    //cout<<find_max(head)<<endl;

    return 0;
}


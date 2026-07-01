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
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode= new Node(val);
    Node* tmp= head;
    if(head == NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void search(Node* head,int find)
{
    int idx=0;
    while(head != NULL)
    {
        if(head->val==find)
        {
            cout<<idx<<endl;
            return;
        }
        head=head->next;
        idx++;
    }
    cout<<"-1"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
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
        int find;
        cin>>find;
        search(head,find);
    }
    return 0;
}



void deleteduplicate(Node* &head) {
    if (head == NULL) return;

    Node* temp1 = head; // Initializing the starting node
    while (temp1 != NULL) {
        Node* temp2 = temp1; // temp2 points to the current node
        Node* temp3 = temp1->next; // temp3 points to the next node

        while (temp3 != NULL) {
            if (temp3->val == temp1->val) {
                temp2->next = temp3->next; // Remove duplicate node
            } else {
                temp2 = temp3; // Move temp2 to current node
            }
            temp3 = temp3->next;
        }
        temp1 = temp1->next;
    }
}


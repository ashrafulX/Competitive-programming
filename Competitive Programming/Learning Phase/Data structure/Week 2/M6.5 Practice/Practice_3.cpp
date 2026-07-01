#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL; // Initially, all next pointers are NULL
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
}

void print(Node* &head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void middle_print(Node* &head)
{
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    if(fast == NULL) // Even length list
    {
        cout << slow->val << " " << slow->next->val << endl;
    }
    else // Odd length list
    {
        cout << slow->val << endl;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    while(1)
    { 
        int val;
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    // print(head);
    middle_print(head);

    return 0;
}

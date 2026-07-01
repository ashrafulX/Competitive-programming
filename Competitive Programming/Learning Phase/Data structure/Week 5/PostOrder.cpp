#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* right;
    Node* left;
    Node(int val)
    {
        this->val=val;
        this->right=NULL;
        this->left=NULL;
    }
};
void Postorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }

    Postorder(root->left);
    Postorder(root->right);
    cout<<root->val<<" ";
}
int main()
{
    Node* root=new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);
    Node* c=new Node(40);
    Node* d= new Node(50);
    Node* e=new Node(60);

    //connection
    root->left=a;
    root->right=b;
    a->left=c;
    b->left=d;
    b->right=e;
    Postorder(root);
    return 0;
}
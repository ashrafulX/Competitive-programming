#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node *left;
    Node *right;
    Node (int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1)
    {
        root=NULL;
    }
    else
    {
        root=new Node(val);
    }
    queue<Node*>q;
    if(root)
    {
        q.push(root);
    }
    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* left;
        Node* right;
        if(l==-1)
        {
            left=NULL;
        }
        else
        {
            left=new Node(l);
        }
        if(r==-1)
        {
            right=NULL;
        }
        else
        {
            right=new Node(r);
        }
        p->left=left;
        p->right=right;

        if(p->left)
        {
            q.push(p->left);
        }
        if(p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}

void outer_tree(Node* root,Node* temp)
{
    if(temp->left==NULL)
    {
        cout<<temp->val<<" ";
        return;
    }
    if(root==NULL)
    {
        return;
    }
    
    if(root->left!=NULL)
    {
        outer_tree(root->left,temp);
    }
    else
        outer_tree(root->right,temp);
    cout<<root->val<<" ";
}
void outer_tree1(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->val<<" ";
    if(root->right!=NULL)
    {
        outer_tree1(root->right);
    }
    else
    outer_tree1(root->left);
    
    
}
int main()
{
    Node* root=input_tree();
    outer_tree(root,root);
    outer_tree1(root->right);
}
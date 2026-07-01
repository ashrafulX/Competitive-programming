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
int node_count(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int l=node_count(root->left);
    int r=node_count(root->right);
    return l+r+1;
}

int maxheight(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int l=maxheight(root->left);
    int r=maxheight(root->right);
    return max(l,r)+1;
}

int main()
{
    Node* root=input_tree();
    int level=maxheight(root);
    int valid_node=pow(2,level)-1;
    int total_node=node_count(root);
    if(valid_node==total_node)
         cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    
}
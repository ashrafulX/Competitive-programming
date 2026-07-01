#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }

};
Node* input_tree()
{
    Node* root;
    queue<Node*> q;
    int val;
    cin>>val;
    if(val== -1)
    {
        root=NULL;
    }
    else {
        root=new Node(val);
        q.push(root);
    }
    while(!q.empty())
    {
        Node* f= q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* left, *right;
        if(l== -1)
            left=NULL;
        else 
            left=new Node(l);
        
        if(r== -1)
            right=NULL;
            else
                right=new Node(r);
        
        f->left=left;
        f->right=right;

        if(f->left != NULL)
            q.push(f->left);
        if(f->right != NULL)
            q.push(f->right);
    }
    return root;
}
void level_ordr(Node* root)
{
    if(root==NULL)
    {
        cout<<"T H E R E    I S     N O     T R E E"<<endl;
    }
    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* f= q.front();
        q.pop();

        cout<<f->val<<" ";

        if(f->left) 
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
}
int main()
{
    Node* root=input_tree();
    level_ordr(root);
    return 0;
}
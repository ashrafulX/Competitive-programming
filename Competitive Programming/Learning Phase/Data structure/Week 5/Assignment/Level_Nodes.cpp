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
    int val;
    cin>>val;
    queue<Node*> q;
    if(val== -1)
        root=NULL;
    else
        root=new Node(val);
    if(root)
        q.push(root);
    
    while(!q.empty())
    {
        Node* parent=q.front();
        q.pop();

        Node *left,*right;
        int l,r;
        cin>>l>>r;
        if(l == -1)
            left=NULL;
            else
                left=new Node(l);
        if(r == -1)
            right=NULL;
            else
                right=new Node(r);
        
        parent->left=left;
        parent->right=right;

        if(parent->left)
            q.push(parent->left);
        if(parent->right)
            q.push(parent->right);

        
    }
    return root;
}
void level_order(Node* root)
{
    if(root==NULL)
    {
        cout<<"Invalid";
        return;
    }
}
int main()
{
    Node* root=input_tree();
    return 0;
}
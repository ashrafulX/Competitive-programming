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
    int val;
    cin>>val;
    Node* root;
    queue<Node*> q;
    if(val== -1)
        root=NULL;
    else 
        root=new Node(val);
    if(root != NULL)
    {
        q.push(root);
    }
    while(!q.empty())
    {
        Node* f=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* myleft, *myright;
        if(l== -1)
            myleft=NULL;
            else
                myleft= new Node(l);
        
        if(r == -1)
            myright=NULL;
            else
                myright=new Node(r);
        
        f->left=myleft;
        f->right=myright;

        if(f->left != NULL)
            q.push(f->left);
        
        if(f->right != NULL)
            q.push(f->right);

    }
    return root;
}
int Max_height(Node* root)
{
    if(root==NULL)
        return 0;
    int l=Max_height(root->left);
    int r=Max_height(root->right);
    return max(l,r)+1;
}
int main()
{
    Node* root=input_tree();
    cout<<Max_height(root);
    return 0;
}
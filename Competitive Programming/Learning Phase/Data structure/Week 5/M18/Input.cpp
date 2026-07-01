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
    if(val== -1)
    {
        root=NULL;
    }
    else 
    {
        root= new Node(val);
    }
    queue<Node *> q;

    if(root!= NULL)
        q.push(root);
    
    while(!q.empty())
    {
        Node* parent=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node* myleft, *myright;
        if(l== -1)
            myleft=NULL;
            else 
              myleft = new Node(l);
        if(r== -1)
            myright=NULL;
            else
                myright = new Node(r);

        //connection
        parent->left=myleft;
        parent->right=myright;

        //childre push in queue
        if(parent->left != NULL)
            q.push(parent->left);
        if(parent->right != NULL)
            q.push(parent->right);
    }
    return root;
}
void level_print(Node* root)
{
    if(root==NULL)
    {
        cout<<"NO TREE";
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* front=q.front();
        q.pop();
        cout<<front->val<<" ";

        //children push in queue
        if(front->left != NULL)
        {
            q.push(front->left);
        }
        if(front->right != NULL)
        {
            q.push(front->right);
        }
    }
}
int main()
{
    Node* root = input_tree();
    level_print(root);
    
    return 0;
}
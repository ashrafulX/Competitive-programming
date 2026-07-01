//bhiya this submission for Re-practice
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
int sum_without_leaf(Node* root)
{
    int sum=0;
    queue<Node*> q;
    if(root)
        q.push(root);
    
    while(!q.empty())
    {
        Node* parent=q.front();
        q.pop();

        if(parent->left != NULL || parent->right != NULL)
        {
            sum=sum+parent->val;
        }

        if(parent->left)
            q.push(parent->left);
        if(parent->right)
            q.push(parent->right);
    }
    return sum;
}
int main()
{
    Node* root=input_tree();
    cout<<sum_without_leaf(root)<<endl;
    return 0;
}
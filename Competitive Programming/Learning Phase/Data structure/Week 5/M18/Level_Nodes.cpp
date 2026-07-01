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

void Level_Nodes(Node* root, int target) {
    if (!root) 
    {
        cout <<"Invalid"<<endl;
        return;
    }

    queue<Node*>q;
    int current=0;

    q.push(root);

    while(!q.empty()) 
    {
        int levelSize=q.size();

        for (int i=0;i<levelSize;i++) 
        {
            Node* f=q.front();
            q.pop();

            if(current==target)
            {
                cout<<f->val<<" ";
            }

            if(f->left) 
            {
                q.push(f->left);
            }

            if(f->right) 
            {
                q.push(f->right);
            }
        }

        if(current==target) 
        {
            return;
        }

        current++;
    }

    cout <<"Invalid"<<endl;
}

int main() {
    Node* root = input_tree();

    int Level;
    cin>>Level;
    Level_Nodes(root,Level);

    return 0;
}
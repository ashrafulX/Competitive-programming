#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL; //initiali shob next NULL kore diyechi
    }
};
int main()
{
    Node a(10),b(20),c(30);
    a.next=&b;
    b.next=&c; 
    // cout<<(a.next)->next->val;
    cout<<a.next->next->val; //its print c.val
    return 0;
}
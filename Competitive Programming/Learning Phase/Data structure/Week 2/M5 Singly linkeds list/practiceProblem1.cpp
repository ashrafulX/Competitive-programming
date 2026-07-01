#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
};
int main()
{
    Node a,b,c,d,e,f,g;
    cin>>a.val>>b.val>>c.val>>d.val>>e.val>>f.val>>g.val;
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=&e;
    e.next=&f;
    f.next=&g;
    g.next=NULL;
    Node *tmp=&a;
    int cnt=0;
    while(tmp != NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    cout<<cnt<<endl;
    return 0;
}
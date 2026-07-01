/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Ashraful Islam
 *   Time & Date : 20:38:06 19/04/2026
 **/
#include <bits/stdc++.h>
using namespace std;
#define MESSI                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

class Node
{
    public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void rhafsolve()
{
    int n;
    cin >> n;

    Node *headA = NULL, *tailA = NULL;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        Node *newnode = new Node(x);
        if (!headA)
            headA = tailA = newnode;
        else
        {
            tailA->next = newnode;
            tailA = newnode;
        }
    }

    int m;
    cin >> m;

    Node *headB = NULL, *tailB = NULL;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        Node *newnode = new Node(x);
        if (!headB)
            headB = tailB = newnode;
        else
        {
            tailB->next = newnode;
            tailB = newnode;
        }
    }

    Node temp(0);
    Node *tail = &temp;

    Node *a = headA;
    Node *b = headB;

    while (a && b)
    {
        if (a->val <= b->val)
        {
            tail->next = a;
            a = a->next;
        }
        else
        {
            tail->next = b;
            b = b->next;
        }
        tail = tail->next;
    }

    if (a)
        tail->next = a;
    if (b)
        tail->next = b;

    Node *cur = temp.next;
    while (cur)
    {
        cout << cur->val << " ";
        cur = cur->next;
    }
    cout << nl;
}

int main()
{
    MESSI;

    int t = 1;
    cin >> t;
    while (t--)
    {
        rhafsolve();
    }

    return 0;
}
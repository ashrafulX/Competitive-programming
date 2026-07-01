/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 03:53:34 10/08/2025
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define yes cout << "YES\n"
#define no cout << "NO\n"
bool flag;
void rhafsolve()
{
    string a, b;
    cin >> a >> b;

    if (a == b)
    {
        yes;
        cout << a << endl;;
        return;
    }

    if (a.front() == b.front())
    {
        yes;
        cout << a.front() << '*' << endl;
        return;
    }

    if (a.back() == b.back())
    {
        yes;
        cout << '*' << a.back() << endl;
        return;
    }

    for (int i = 0; i<a.size(); i++)
    {
        string sa = a.substr(i, 2);
        for (int j = 0; j <b.size(); j++)
        {
            if (sa == b.substr(j, 2))
            {
                yes;
                cout << '*' << sa << '*' <<endl;
                return;
            }
        }
    }

    no;
}

int main() {
    FAST_IO;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
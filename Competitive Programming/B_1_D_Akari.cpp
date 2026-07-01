/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 18:07:50 26/07/2025
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
void rhafsolve()
{
    string s;
    cin >> s;
    int n = s.size();
    string t = s;

    int last_o = -2; // কোনো o এর index - শুরুতে কোনো o নেই

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '#')
        {
            t[i] = '#';
        }
        else
        {
            // যদি আগের o থেকে 1 ঘর দূরত্বে না হয়, তাহলে এখানে o বসাতে পারি
            if (i - last_o > 1)
            {
                t[i] = 'o';
                last_o = i;
            }
            else
            {
                t[i] = '.';
            }
        }
    }

    cout << t << '\n';
}

int main() {
    FAST_IO;

    int t = 1;
    // cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
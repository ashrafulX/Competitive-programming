/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:00:36 31/07/2025
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
    ll n,s;
    cin >> n >> s;

    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (val == 0)
            a++;
        else if (val == 1)
            b++;
        else
            c++;
    }

    ll sum = b + 2 * c;

    if (s < sum || s == sum + 1)
    {

        for (int i = 0; i < a; i++)
            cout << "0 ";
        for (int i = 0; i < c; i++)
            cout << "2 ";
        for (int i = 0; i < b; i++)
            cout << "1 ";
        cout << endl;
    }
    else
    {
        cout << -1 << endl;;
    }
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
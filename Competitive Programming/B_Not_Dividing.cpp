/**
*  In the name of Allah, the Most Gracious, the Most Merciful.
*  Author : Ashraful Islam
*  Time & Date : 00:20:26 17/08/2025
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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    if (v[0] == 1)
    {
        v[0]=2;
    }

    for (int i = 1; i < n; i++)
    {
        if (v[i] == 1)
        {
            v[i]=2;
        }
        if (v[i] % v[i - 1] == 0)
        {
            v[i]++;
        }
    }
    


    for (auto val : v) cout << val << " ";
    cout << endl;
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
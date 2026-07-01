/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:26:05 07/09/2025
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define MESSI ios::sync_with_stdio(false); cin.tie(nullptr);
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
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];

    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
        mp[b[i]].push_back(i);

    vector<int> a(n, 0);
    int val = 1;

    for (auto it : mp)
    {
        int freq = it.first;
        vector<int> v = it.second;

        if (v.size() % freq != 0)
        {
            cout << -1 << endl;
            return;
        }

        for (int i = 0; i < v.size(); i++)
        {
            a[v[i]] = val;
            if ((i + 1) % freq == 0)
                val++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

//observation
/**
 
 **/
int main() {
    MESSI;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
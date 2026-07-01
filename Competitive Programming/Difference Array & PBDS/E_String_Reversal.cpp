/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 22:27:03 22/07/2025
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string r = s;
    reverse(rall(r));

    map<char, vector<int>> posS, posR;
    for (int i = 0; i < n; i++)
    {
        posS[s[i]].push_back(i);
        posR[r[i]].push_back(i);
    }

    vector<int> per(n);
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        for (int i = 0; i < posS[ch].size(); i++)
        {
            per[posR[ch][i]] = posS[ch][i];
        }
    }

    pbds<int> p;
    ll ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        ans += p.order_of_key(per[i]);
        p.insert(per[i]);
    }
    cout << ans << endl;
    
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
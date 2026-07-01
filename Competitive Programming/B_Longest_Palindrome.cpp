/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 03:18:47 31/07/2025
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define yes cout << "YES\n"
#define no cout << "NO\n"

bool ispal(string s)
{
    int i = 0, j = s.size() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

void rhafsolve()
{
    int n, m;
    cin >> n >> m;
    vector<string> v;
    while (n--)
    {
        string s;
        cin >> s;
        v.pb(s);
    }
    vector<string> ans;
    vector<bool> used(v.size(), false);

    for (int i = 0; i < v.size(); i++)
    {
        if (used[i]) 
            continue;

        if (ispal(v[i]))
        {
            used[i] = true;
            ans.pb(v[i]);
            continue;
        }

        for (int j = i + 1; j < v.size(); j++)
        {
            if (used[j]) 
                continue;

            string rev = v[j];
            reverse(rev.begin(), rev.end());
            if (v[i] == rev)
            {
                ans.pb(v[j]);
                ans.pb(v[i]);
                used[i] = true;
                used[j] = true;
                break;
            }
        }
    }

    cout << ans.size() * m << endl;

    char oddchar = 0;
    string abcd;
    deque<char> dq;
    vector<char> a;

    for (auto val : ans)
    {
        for (char b : val)
            a.pb(b);
    }

    map<char, int> mp;
    for (auto val : a)
        mp[val]++;

    for (auto val : mp)
    {
        if (val.second % 2 != 0 && oddchar == 0)
        {
            oddchar = val.first;
            for (int i = 0; i < val.second; i++)
                abcd.push_back(val.first);
        }
    }

    for (auto val : mp)
    {
        int cnt = val.second;
        if (val.first == oddchar) cnt = 0; 
        for (int i = 0; i < cnt / 2; i++)
        {
            dq.push_back(val.first);
            dq.push_front(val.first);
        }
    }

    dq.insert(dq.begin() + dq.size() / 2, abcd.begin(), abcd.end());

    for (auto val : dq)
        cout << val;
    cout << '\n';
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

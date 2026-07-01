/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 20:47:10 28/08/2025
**/
#include <bits/stdc++.h>
using namespace std;
#define MESSI ios::sync_with_stdio(false); cin.tie(nullptr);
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int val = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            val++;
        else
            val = 0;
        if (val >= k)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        no;
        return;
    }

    yes;
    vector<int> zeros, ones;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            zeros.pb(i);
        else
            ones.pb(i);
    }

    vector<int> v(n);
    int cur = n;
    for (int idx : zeros)
        v[idx] = cur--;
    for (int idx : ones)
        v[idx] = cur--;

    for (int i = 0; i < n; i++)
    {
        if (i)
            cout << " ";
        cout << v[i];
    }
    cout << endl;
}

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

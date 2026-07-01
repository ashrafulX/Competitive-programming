/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:07:50 01/07/2026
**/
#include <bits/stdc++.h>
using namespace std;
#define MESSI ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
void rhafsolve()
{
    int n, x;   cin >> n >> x;

    string s(3 * n, '0');
    int r = x;

    for (int i = 0; i < n; i++)
    {
        int l = n - i;
        int c;

        if (r <= 1 + 3 * (l - 1))
        {
            if (r > 3 * (l - 1)) c = 1;
            else    c = 0;
        }
        else
        {
            if (r - 2 <= 3 * (l - 1))  c = 2;
            else  c = 3;
        }

        if (c >= 1)  s[i] = '1';
        if (c >= 2) s[i + n] = '1';
        if (c >= 3) s[i + 2 * n] = '1';
        r -= c;
    }

    cout << s << nl;
}
//observation
/**
 
 **/
signed main() {
    MESSI;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
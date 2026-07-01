/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 20:45:23 29/01/2026
**/
#include <bits/stdc++.h>
using namespace std;
#define MESSI ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
void rhafsolve()
{
    int n;  string s;
    cin >> n >> s;

    int ans = 0;

    for (char c : s)
        if (c == '1')
            ans++;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            bool flag = (i == 0 || s[i - 1] == '0') && (i == n - 1 || s[i + 1] == '0');

            if (flag)
            {
                ans++;
                s[i] = '1';
                i += 2;
            }
        }
        else
        {

            i += 1;
        }
    }

    cout << ans << nl;
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
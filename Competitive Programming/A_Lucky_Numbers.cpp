/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 20:09:26 17/04/2026
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
    int a, b;
    cin >> a >> b;

    int eff = -1;
    int num = a;

    for (int i = a; i <= b; i++)
    {
        string s = to_string(i);

        int mx = 0, mn = 9;
        for (auto c : s)
        {
            mx = max(mx, c - '0');
            mn = min(mn, c - '0');
        }

        if (mx - mn >= eff)
        {
            eff = mx - mn;
            num = i;
        }
    }
    cout << num << nl;
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
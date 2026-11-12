/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:45:08 12/11/2026
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
    int n;string s; cin >> n >> s;

    bool use[26] = {};

    for (int i = 0; i < n / 2; i++) {
        int a = min(s[i], s[n - 1 - i]) - 'a';
        int b = max(s[i], s[n - 1 - i]) - 'a';

        for (int j = a; j < b; j++) use[j] = true;
    }

    int ans = 0;
    for (int i = 0; i < 25; i++) ans += use[i];

    cout << ans <<nl;
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
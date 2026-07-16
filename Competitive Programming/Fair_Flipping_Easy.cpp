/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:28:34 15/07/2026
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
    int n, k; cin >> n >> k;
    string s; cin >> s;

    int z = 0;
    for (char c : s)    if (c == '0') z++;
    int o = n - z;
    if (z < k || o < k)   cout << s << nl;
    else if (z == k && o == k) 
    {
        string t = s;
        for (char &c : t)
        {
            if(c=='0') c='1';
            else c='0';
        }
        cout << min(s, t) << nl;
    }
    else  cout << string(z, '0') + string(o, '1') << nl;

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
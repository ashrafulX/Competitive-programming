/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 20:39:00 16/05/2026
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
    int n;  cin>>n;
    int zero = 0, one = 0, two = 0;

    for (int i = 0; i < n; i++)
    {
        int x;  cin >> x;
        if (x == 0) zero++;
        else if (x == 1)    one++;
        else two++;
    }

    int ans = 0;
    ans += zero;
    int mn = min(one, two);
    ans += mn;
    one -= mn;
    two -= mn;
    ans += one / 3;
    ans += two / 3;

    cout << ans << nl;
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
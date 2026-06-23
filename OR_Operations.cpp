/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:42:37 17/06/2026
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
    int n;  cin >> n;
    vector<int> v(n);
    int orr = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i]; 
        orr |= v[i];
    }
    int seg = 0;
    int cur = 0;
    for (int i = 0; i < n; i++)
    {
        cur |= v[i];

        if (cur == orr)
        {
            seg++;
            cur = 0;
        }
    }

    cout << n - seg << nl;
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
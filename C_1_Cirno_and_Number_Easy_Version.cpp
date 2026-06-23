/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:18:33 16/05/2026
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
    int a, n;
    cin >> a >> n;
    int NA, NB;
    cin >> NA >> NB;

    string s = to_string(a);
    int max_len = s.size() + 1;
    int ans = 1e18;

    for (int len = 1; len <= max_len; len++)
    {
        int total = 1LL << len;

        for (int j = 0; j < total; j++)
        {
            int num = 0;
            for (int i = 0; i < len; i++)
            {
                if ((j >> i) & 1)num = num * 10 + NA;
                else num = num * 10 + NB;
            }

            ans = min(ans, abs(a - num));
        }
    }

    cout << ans << nl;
}
// observation
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
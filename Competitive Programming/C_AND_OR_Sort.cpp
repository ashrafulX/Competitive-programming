/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 20:56:29 21/09/2026
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
    int n; cin >> n;
    string s; cin >> s;
    int totalzero = 0;
    for (char c : s) if (c == '0') totalzero++;

    if (s[0] == '1')
    {
        cout << totalzero << nl;
        return;
    }

    int first1 = n;
    for (int i = 0; i < n; i++)
        if (s[i] == '1')
        {
            first1 = i;
            break;
        }

    int onebefore = 0;         
    int zeroafter = totalzero; 
    int ans = n;

    for (int k = 1; k <= n; k++)
    {
        if (s[k - 1] == '1') onebefore++;
        else zeroafter--;

        if (k >= first1)  ans = min(ans, onebefore + zeroafter);
    }
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
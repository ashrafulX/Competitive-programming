/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:31:42 23/02/2026
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
    int n;  cin >> n;

    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    vector<ll> a;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {

        while (!a.empty() && a.back() >= v[i])
            a.pop_back();

        if (a.empty() || v[i] != a.back() + 1)
        {
            ans++;
            a.clear();
        }

        a.push_back(v[i]);
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
/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 22:13:59 30/06/2026
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
    int n;cin >> n;
    string s; cin >> s;
    bool flag = false;
    int ones = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            if (ones % 2 == 1)
            {
                flag=true;
                break;
            }
        }
        else ones++;

    }
    int zeros = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            if (zeros % 2 == 1){
                 flag = true;
                 break;
            }
        }
        else  zeros++;

    }

    if(flag) cout<<"Alice"<<nl;
    else cout<<"Bob"<<nl;
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
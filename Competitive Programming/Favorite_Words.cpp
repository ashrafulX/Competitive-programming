/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 20:31:26 01/07/2026
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
    string s;   cin>>s;
    int n=s.size()-1;
    if(s[0]=='c' || s[n]=='f') yes; else no;
}
//observation
/**
 
 **/
signed main() {
    MESSI;

    int t = 1;
    // cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Ashraful Islam
 *   Time & Date : 05:20:24 30/11/2025
 **/
#include <bits/stdc++.h>
using namespace std;
#define MESSI                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define yes cout << "YES\n"
#define no cout << "NO\n"

void rhafsolve()
{
    string p, s;
    cin >> p >> s;

    int pi = 0, si = 0;
    while (pi < p.size() && si <s.size())
    {
        if (p[pi] != s[si])
        {
            no;
            return;
        }
        
        char c = p[pi];
        int cntp = 0;
        while (pi <  p.size() && p[pi] == c)
        {
            cntp++;
            pi++;
        }
        int cnts = 0;
        while (si <  s.size() && s[si] == c)
        {
            cnts++;
            si++;
        }
        if (cnts < cntp || cnts > 2 * cntp)
        {
            no;
            return;
        }
    }

    if (pi ==  p.size() && si ==  s.size())
        yes; else no;
}

int main()
{
    MESSI;
    int t;
    cin >> t;
    while (t--)
        rhafsolve();
    return 0;
}

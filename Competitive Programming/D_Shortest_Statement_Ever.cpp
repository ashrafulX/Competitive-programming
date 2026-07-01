/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 22:18:05 29/01/2026
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
    ll x, y; cin >> x >> y;

    ll p = 0, q = 0;

    ll p1 = x;
    ll q1 = y & ~x;
    ll dist1 = abs(x - p1) + abs(y - q1);

    ll p2 = x & ~y;
    ll q2 = y;
    ll dist2 = abs(x - p2) + abs(y - q2);

    ll p3 = 0, q3 = 0;
    for (int i = 29; i >= 0; i--)
    {
        ll bit = 1LL << i;
        bool xbit = (x >> i) & 1;
        bool ybit = (y >> i) & 1;

        if (xbit && ybit)
        {
            p3 |= bit;
        }
        else if (xbit)
        {
            p3 |= bit;
        }
        else if (ybit)
        {
            q3 |= bit;
        }
    }
    ll dist3 = abs(x - p3) + abs(y - q3);

    if (dist1 <= dist2 && dist1 <= dist3)
    {
        p = p1;
        q = q1;
    }
    else if (dist2 <= dist3)
    {
        p = p2;
        q = q2;
    }
    else
    {
        p = p3;
        q = q3;
    }

    cout << p << " " << q << nl;
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
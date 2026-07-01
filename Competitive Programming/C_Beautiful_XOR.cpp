/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:28:29 17/10/2025
**/
#include <bits/stdc++.h>
using namespace std;
#define MESSI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define yes cout << "YES\n"
#define no cout << "NO\n"
int   msb(int n)
{
    if (n == 0)
        return -1;
    return 31 - __builtin_clz(n);
}
void rhafsolve()
{
    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0 << endl<< endl;
    }
    else if (a < b)
    {

        if (  msb(a) <   msb(b))
        {
            cout << -1 << endl;
        }
        else
        {

            cout << 1 << endl;
            cout << (a ^ b) << endl;
        }
    }
    else
    {

        if ((a & b) == b)
        {
            cout << 1 << endl;
            cout << (a ^ b) << endl;
        }
        else
        {
            int x1 = a ^ (a | b);
            int x2 = (a | b) ^ b;
            cout << 2 << endl;
            cout << x1 << " " << x2 << endl;
        }
    }
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
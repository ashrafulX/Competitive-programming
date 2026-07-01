/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:12:55 20/11/2025
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
void rhafsolve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    vector<int> d(n);
    int D = 0;
    for (int i = 0; i < n; i++)
    {
        d[i] = a[i] ^ b[i];
        D ^= d[i];
    }

    if (D == 0)
    {
        cout << "Tie" << endl;
        return;
    }

    int cnt = 0;
    int val = 1;

    for (int i = 1; i <= 30; i++) val *= 2;

    for (int i = 30; i >= 0; i--)
    {
        if (D & val)
        {
            cnt = i;
            break;
        }
        val /= 2;
    }

    val = 1;
    for (int j = 0; j < cnt; j++) val *= 2;

    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        if (d[i] & val)
        {
            if ((i + 1) % 2 == 1)
                odd++;
            else
                even++;
        }
    }

    if (odd > even) cout << "Ajisai" << endl;
    else if (even > odd) cout << "Mai" << endl;
    else cout << "Tie" << endl;
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
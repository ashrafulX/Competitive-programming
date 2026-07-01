/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:02:55 19/12/2025
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
    ll n,k;
    cin >> n >> k;

    if (k == 1)
    {
        cout << n << nl;
        return;
    }

    if (k % 2 == 1)
    {
        for (int i = 0; i < k; i++)
        {
            cout << n << " ";
        }
    }
    else
    {
        ll a=1LL<<(63 - __builtin_clzll(n));
        cout<<(n-a)<<" "<<a<<" ";
        for(int i=2;i<k;i++) cout<<n<<" ";
    }
    cout << nl;
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
/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 20:55:23 12/10/2025
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
ll cnt(ll n)
{
    ll count = 0;
    while (n > 0)
    {
        
        n &= (n - 1);
        count++;
    }
    return count;
}
void rhafsolve()
{
    ll n;   cin>>n;
    if(n==0)
    {
        yes;
        return;
    }
    int bit=cnt(n);

    if((n&(n-1))==0) no;
    else yes;
}
//observation
/**
 int rev = 0;
        for (int i = 0; i < 30; i++) {
            rev = (rev << 1) | (n & 1);
            n >>= 1;
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
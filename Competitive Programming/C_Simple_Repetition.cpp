
/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 00:06:00 21/10/2025
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
bool isPrime(ll n)
{
    if(n<2) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}
void rhafsolve()
{
    ll n,k;    cin>>n>>k;

    if(n==1 && k==2)
    {
        yes;
        return;
    }

    if(isPrime(n) && k==1)
    {
        yes;
        return;
    }
    no;
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
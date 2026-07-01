/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 23:42:48 09/04/2026
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
vector<ll> mem(100005,-1);

ll fibo(ll n)
{
    if(n<=1) return n;

    if(mem[n] != -1) return mem[n];
    return mem[n]=fibo(n-1)+fibo(n-2);

    

}
void rhafsolve()
{
    ll n;  cin>>n;
    cout<<1LL * fibo(n)<<nl;
}
//observation
/**
 
 **/
int main() {
    MESSI;

    int t = 1;
    // cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
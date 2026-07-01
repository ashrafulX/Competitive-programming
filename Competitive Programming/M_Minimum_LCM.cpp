/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 15:01:03 27/12/2025
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
    ll n;       cin>>n;
    ll a=1;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            a=n/i;
            break;
        }
    }
    cout<<a<<" "<<n-a<<nl;
    

}
//observation
/**
    // ll a=1,b=n-1;
    // ll aa,bb;
    // ll mn=LLONG_MAX;
    // while(a<=b)
    // {
    //     ll val=lcm(a,b);
    //     if(val<mn && a+b==n)
    //     {
    //         aa=a;
    //         bb=b;
    //         mn=val;
    //     }
    //     a++;b--;
    // } 

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
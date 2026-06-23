/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 00:11:51 01/05/2026
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
    int n;  cin>>n;
    vector<int>v(n);
    for(auto&i:v)   cin>>i;
    vector<int> a,b,c,d;
    for(auto val : v)
    {
        if(val%6==0) a.pb(val);
        else if(val%3==0) b.pb(val);
        else if(val%2==0) c.pb(val);
        else if(val%1==0) d.pb(val);
    }
    for(auto val : a) cout<<val<<" ";
    for(auto val : c) cout<<val<<" ";
    for(auto val : d) cout<<val<<" ";
    for(auto val : b) cout<<val<<" ";
    cout<<nl;
}
//observation
/**
 
 **/
signed main() {
    MESSI;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
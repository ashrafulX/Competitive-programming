/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 01:11:15 29/04/2026
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
    vector<int> v(n);
    for(auto&i:v) cin>>i;
    int gc=0;
    int ans=0;   
    for(int i=0;i<n;i++)
    {
        if(i+1<n && gcd(v[i+1],v[i])==(gc==abs(v[i]-v[i+1])))
            ans++;
    }
    cout<<ans<<nl;

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
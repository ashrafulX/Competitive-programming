/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 04:18:56 18/09/2026
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
    map<pair<int,int> , string> mp;
    for(int i=0;i<n;i++)
    {
        int a,b;string s;   cin>>a>>b>>s;
        mp[{a,b}]=s;
    }
    int t;  cin>>t;
    while(t--)
    {
        int a,b;    cin>>a>>b;
        cout<<mp[{a,b}]<<nl;
    }
    

}
//observation
/**
 
 **/
signed main() {
    MESSI;

    int t = 1;
    // cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
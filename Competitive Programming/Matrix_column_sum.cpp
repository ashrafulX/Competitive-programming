/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 20:09:41 06/07/2026
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
    int n,m;    cin>>n>>m;
    vector<vector<int>> v(n,vector<int> (m));
    vector<int> ans;
    int res=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           cin>>v[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
          res+=v[j][i];
        }
        ans.pb(res);
        res=0;
    }
    for(auto val: ans) cout<<val<<nl;
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
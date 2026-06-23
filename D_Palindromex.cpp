/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:13:47 30/04/2026
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
int mex(int l, int r, vector<int>& v, int n)
{
    if(v[l] != v[r]) return 0;

    while(l>0 && r<2*n-1 && v[l-1]==v[r+1]) l--, r++;

    vector<int> f(n+1);
    for(int i=l;i<=r;i++) if(v[i]<=n) f[v[i]]=1;

    int m=0;
    while(f[m]) m++;
    return m;
}

void rhafsolve()
{
    int n; cin>>n;
    vector<int> v(2*n);

    int p1=-1,p2=-1;
    for(int i=0;i<2*n;i++)
    {
        cin>>v[i];
        if(v[i]==0) (p1==-1 ? p1 : p2)=i;
    }

    int left=(p1+p2)/2, right=(p1+p2+1)/2;

    int ans=0;
    ans = max(ans, mex(p1,p1,v,n));
    ans = max(ans, mex(p2,p2,v,n));
    ans = max(ans, mex(left,right,v,n));
    cout<<ans<<nl;
}
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
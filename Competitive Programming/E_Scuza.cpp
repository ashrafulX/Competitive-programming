/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 22:51:02 20/02/2026
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
    int n,q;    cin>>n>>q;
    vector<ll> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    // sort(all(v));
    vector<ll> pre(n,0);
    pre[0]=v[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+v[i];
    }
    vector<ll> mx(n);
    mx[0]=v[0];
    for(int i=1;i<n;i++)
    {
        mx[i]=max(mx[i-1],v[i]);
    }
    // for(auto val : mx) cout<<val<<" ";
    while(q--)
    {
        int x;  cin>>x;
       auto it=upper_bound(all(mx),x);
       int idx=it-mx.begin();
       if(idx==0) cout<<0<<" ";
       else cout<<pre[idx-1]<<" ";
    };
    cout<<nl;

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
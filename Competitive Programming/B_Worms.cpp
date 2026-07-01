/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 17:47:57 15/02/2026
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
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    // sort(all(v));
    int q;  cin>>q;
    vector<int> pre(n);
    pre[0]=v[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+v[i];
    }
    while(q--)
    {
        int x;  cin>>x;
        // int l=0,r=n-1;
        // int ans;
        // while(l<=r)
        // {
        //     int mid=(l+r)/2;
        //     if(pre[mid]>=x)
        //     {
        //         ans=mid+1;
        //         r=mid-1;
        //     }
        //     else
        //     {
        //         l=mid+1;
        //     }
        // }
        // cout<<ans<<nl;
        auto  it=lower_bound(all(pre),x);
        int idx=it-pre.begin();
        cout<<++idx<<nl;
    }
}
//observation
/**
    2 9 12 16 25
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
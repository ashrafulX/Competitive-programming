/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 01:13:21 20/07/2025
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define yes cout << "YES\n"
#define no cout << "NO\n"
void rhafsolve()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll cnt=0, ans=0;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]<=v[i+1])
        {
            cnt++;
        }
        else if(v[i]>v[i+1])
        {
            cnt=0;
        }
        ans=max(cnt,ans);
    }
    cout<<++ans<<endl;
}
int main() {
    FAST_IO;

    int t = 1;
    // cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 18:00:21 22/07/2025
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
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define yes cout << "YES\n"
#define no cout << "NO\n"
void rhafsolve()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int> d(n+1);
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        a--;b--;
        d[a]+=1;
        d[b+1]-=1;
    }
    for(int i=1;i<=n;i++)
    {
        d[i]=d[i-1]+d[i];
    }
    sort(rall(v));
    sort(rall(d));
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ans+= 1LL * v[i]*d[i];
    }
    cout<<ans<<endl;
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
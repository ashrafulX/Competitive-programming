/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 14:53:28 31/07/2025
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
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    vector<int> v(n);
    pbds<int> p;

    for(int i=0;i<n;i++)
    {
        v[i]=a[i]-b[i];
        p.insert(v[i]);
    }
    ll cnt=0;
    sort(all(v));
    for (int i = 0; i < n; i++) 
    {
        int pos = upper_bound(v.begin() + i + 1, v.end(), -v[i]) - v.begin();
        cnt += (n - pos); 
    }
    cout<<cnt<<endl;
    
    

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
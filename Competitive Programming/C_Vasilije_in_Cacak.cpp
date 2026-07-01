/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 17:50:03 08/08/2025
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
bool flag;
void rhafsolve()
{
    ll n,k,x;
    cin>>n>>k>>x;
    ll mn=0,mx=0;
    mn = k * (k+ 1) / 2;
    // mx = k * (2 * n - k + 1) / 2;
    int cnt=0;
    for(int i=n;i>=0;i--)
    {
        if(cnt==k)
        {
            break;
        }
        mx+=i;
        cnt++;
    }

    // cout<<mn<<" "<<mx<<endl;
    if(mn<= x && x <=mx) yes; else no;
    
}
int main() {
    FAST_IO;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
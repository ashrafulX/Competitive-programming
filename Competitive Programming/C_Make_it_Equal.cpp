/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:08:00 10/08/2025
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
    ll n, k;
    cin >> n >> k;
    map<ll, ll> a;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x%k]++;
    }

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ll val = x % k;
        ll sum = (k-val)%k;

        if (a.count(val) && a[val] > 0)
            a[val]--;
        else if (a.count(sum) && a[sum] > 0)
            a[sum]--;
        else
        {
            for(int j = i + 1; j < n; j++) 
                cin >> x;
            no;
            return;
        }
    }
    
    yes;
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

/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 20:56:00 22/07/2025
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
ll maxN=1e6+10;
vector<ll> allprime;
vector<bool> prime(maxN+1,true);
void sieve()
{
    for(int i=2;i*i<=maxN;i++)
    {
        if(prime[i])
        {
            for(int j=i+i;j<=maxN;j+=i)
            {
                prime[j]=false;
            }
        }
    }

    for(ll i=1;i<=maxN;i++)
    {
        if(prime[i])
        {
            allprime.pb(i);
        }
    }
}
void rhafsolve()
{
    ll l, r;
    cin >> l >> r;
    ll cnt = 0;
    for (ll i = l; i*i <= r; ++i)
    {
        bool flag = (i % 2 == 0) || (i % 3 == 0) || (i % 5 == 0) || (i % 7 == 0);

        if (!flag)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

int main() {
    FAST_IO;
    sieve();
    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}


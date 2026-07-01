/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 19:25:01 07/05/2026
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
const int maxN = 1e6 + 10;
vector<int> isprime;
vector<bool> prime(maxN, true);


void sieve()
{
    prime[0] = prime[1] = false;

    for(int i=2;i<maxN;i++)
    {
        if(prime[i])
        {
            isprime.pb(i);

            for(int j=i+i;j<maxN;j+=i)
            {
                prime[j] = false;
            }
        }
    }
}

void rhafsolve()
{
    int n;
    cin >> n;

    vector<int> ans;

    ans.pb(isprime[0]);

    for(int i=1;i<n;i++)
    {
        ans.pb(isprime[i-1] * isprime[i]);
    }

    for(auto val : ans) cout << val << " ";
    cout << nl;
}
//observation
/**
 
 **/
signed main() {
    MESSI;
    sieve();

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
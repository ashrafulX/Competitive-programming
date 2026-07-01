/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 20:47:57 28/10/2025
**/
#include <bits/stdc++.h>
using namespace std;
#define MESSI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define yes cout << "YES\n"
#define no cout << "NO\n"
int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};
void rhafsolve()
{
    int n; cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll ans=-1;
    for(int p:primes)
    {
        bool flag=1;
        for(int i=0;i<n;i++)
        {
            if(a[i]%p!=0)
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
        {
            ans=p;
            break;
        }
    }
    cout<<ans<<endl;
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
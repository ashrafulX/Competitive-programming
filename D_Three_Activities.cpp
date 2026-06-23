/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 03:53:39 16/05/2026
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
void rhafsolve()
{
    int n;  cin>>n;
    vector<int> a(n),b(n),c(n);
    for(auto&i:a) cin>>i;
    for(auto&i:b) cin>>i;
    for(auto&i:c) cin>>i;
    
    int ans=0;
    bool Aflag=false,Bflag=false,cflag=false;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=(b[i] && c[i]) && !Aflag)
        {
            ans+=a[i];
            Aflag=true;
        }
        else if(b[i]>=(a[i] && c[i]) && !Bflag)
        {
            ans+=b[i];
            Bflag=true;
        }
        else if(c[i]>=(a[i] && b[i]) && !cflag)
        {
            ans+=c[i];
            cflag=true;
        }

    }
    cout<<ans<<nl;
}
//observation
/**
 
 **/
signed main() {
    MESSI;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
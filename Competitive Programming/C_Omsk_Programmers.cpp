/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 19:23:39 23/06/2026
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
    int a,b,x;  cin>>a>>b>>x;
    
    if(a==b)
    {
        cout<<0<<nl;
        return;
    }
    int ans=abs(a-b);
    int cnt=0;
    while(true)
    {
        if(a==b) break;
        if(a<b)
        {
            b/=x;
        }
        else a/=x;

        cnt++;
        ans=min(ans,(cnt+abs(a-b)));
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
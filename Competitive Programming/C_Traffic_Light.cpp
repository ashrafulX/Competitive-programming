/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 00:49:23 05/02/2026
**/
#include <bits/stdc++.h>
using namespace std;
#define MESSI ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
void rhafsolve()
{
    int n; char a; string s;   
    cin>>n>>a>>s;
    s+=s;
    n*=2;

    ll ans=0,lastg=-1;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='g')
        {
            lastg=i;
        }
        
        if(a==s[i])
        {
            ans=max(ans,lastg-i);
        }
    }
    cout<<ans<<nl;
}
//observation
/**
 * rrrgyyygyrrrgyyygy
 
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
/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 17:48:53 22/04/2026
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
    int n,k;    cin>>n>>k;
    string s;   cin>>s;
    int zero=0,one=0,two=0;
    for(auto val : s)
    {
        if(val=='0') zero++;
        else if(val=='1') one++;
        else two++;
    }
    string ans(n,'?');
    for(int i=0;i<zero;i++){
        ans[i]='-';
    }
    for(int i=n-1;i>=n-one;i--) ans[i]='-';

    for(int i=(zero+two);i<(n-one-two);i++)
    {
        ans[i]='+';
    }

    if(n==k) ans=string(n,'-');
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
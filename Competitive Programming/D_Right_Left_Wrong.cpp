/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 18:58:22 02/12/2025
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
#define nline '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
void rhafsolve()
{
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    string s;   cin>>s;

    vector<ll> pre(n);
    pre[0]=v[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=v[i]+pre[i-1];
    }
    int l=0,r=n-1;
    ll ans=0;
    while(l<r)
    {
        if(s[l]=='L' && s[r]=='R')
        {
            if(l==0)
            {
                ans+=pre[r]; //unnecessary
            }
            else
                ans+=pre[r]-pre[l]+v[l];
            l++;r--;
        }
        else if(s[l] != 'L')
        {
            l++;
        }
        else if(s[r] != 'R')
        {
            r--;
        }
    }
    cout<<ans<<nline;
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
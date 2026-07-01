/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 06:33:22 05/04/2026
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
    string s;   cin>>s;
    int n=s.size();
    map<char,int> mp;
    int ans=INT_MAX;

    int l=0,r=0;
    while(r<n)
    {
        mp[s[r]]++;

        while(mp.size()==3)
        {
            ans=min(ans,r-l+1);
            mp[s[l]]--;
            if(mp[s[l]]==0) mp.erase(s[l]);
            l++;
        }
        r++;
    }
    if(ans!=INT_MAX) cout<<ans<<nl; else cout<<0<<nl;
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
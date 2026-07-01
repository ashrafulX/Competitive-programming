/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 20:47:08 04/02/2026
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
    int n;  cin>>n;
    string s;   cin>>s;
    for(int i=0;i<n;i++)
    {
        s[i]=tolower(s[i]);
    }
    map<char,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    vector<int> freq;
    for(auto val : mp)
    {
        freq.pb(val.second);
    }
    sort(rall(freq));
    int cnt=0;
    int ans=0;
    for(auto val : freq)
    {
        ans+=val;
        cnt++;
        if(cnt==2) break;
    }
    cout<<ans<<nl;

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
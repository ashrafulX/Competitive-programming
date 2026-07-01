/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 04:44:43 04/12/2025
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
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int x;  cin>>x;
        mp[x]++;
    }
    if(mp.size()==1)
    {
        cout<<0<<nl;
        return;
    }
    int mx=0;
    for(auto val : mp)
    {
        mx=max(mx,val.second);
    }
    int ans=0;
    while(mx<n)
    {
        int rem=n-mx;
        ans+=min(mx+1,rem);
        mx+=mx;
    }
    cout<<++ans<<nl;

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
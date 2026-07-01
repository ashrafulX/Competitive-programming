/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 00:40:04 07/12/2025
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
ll mx=0,mn=0;
void rhafsolve()
{
    int n;  cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n;i++)    cin>>b[i];
    ll mx=0,mn=0;
    for(int i=0;i<n;i++)
    {
       ll aa=max(mx-a[i],b[i]-mn);
       ll bb=min(mn-a[i],b[i]-mx);
       mx=aa;
       mn=bb;
    }
    cout<<mx<<nl;
    set<int> st;
    
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
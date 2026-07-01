/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 01:46:03 21/10/2025
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
void rhafsolve()
{
    int n,m;    cin>>n>>m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<m;i++)    cin>>b[i];
    ll cnt=0;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        cnt+=mp[b[i]];
    }
    cout<<cnt<<endl;
}
//observation
/**
 
 **/
int main() {
    MESSI;

    int t = 1;
    // cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
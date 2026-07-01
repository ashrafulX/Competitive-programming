/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 17:50:46 20/10/2025
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
// void rhafsolve()
// {
//     // TLE SOLVE
//     int n,m;    cin>>n>>m;
//     vector<int> a(n),b(m);
//     for(int i=0;i<n;i++)    cin>>a[i];
//     for(int i=0;i<m;i++)    cin>>b[i];

//     vector<int> ans;
//     for(int i=0;i<m;i++)
//     {
//         int cnt=0;
//         for(int j=0;j<n;j++)
//         {
//             if(a[j]<b[i])
//             {
//                 cnt++;
//             }
//         }
//         ans.pb(cnt);
//     }
//     for(int val : ans) cout<<val<<" ";
// }
void rhafsolve()
{
    ll n,m;    cin>>n>>m;
    vector<ll> a(n),b(m);
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<m;i++)    cin>>b[i];
    vector<ll> ans;
    ll i=0,j=0;
    ll cnt=0;
    while(j<m)
    {
        if(i<n && a[i]<b[j])
        {
            cnt++;
            i++;
        }
        else
        {
            j++;
            ans.push_back(cnt);

        }
    }
    for(auto val: ans) cout<<val<<" ";
    

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
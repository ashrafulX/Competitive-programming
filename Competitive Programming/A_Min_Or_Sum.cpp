/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 04:09:02 14/10/2025
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
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    ll sum=0;
    for(int i=0;i<n;i++)
    {   
        sum|=v[i];
    }
    cout<<sum<<endl;
}


// void rhafsolve()
// {
//     int n;  cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)    cin>>v[i];

//     ll sum=0;
//     for(int i=1;i<n;i++)
//     {
//         v[0]=v[i]|v[0];
//         v[i]=0;
//     }
//     for(auto val : v) sum+=val;
//     cout<<sum<<endl;
//     // for(auto val : v) cout<<val<<" "; cout<<endl;
// }
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
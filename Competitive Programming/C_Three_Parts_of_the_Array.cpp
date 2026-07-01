// /**
// *   In the name of Allah, the Most Gracious, the Most Merciful.
// *   Author : Ashraful Islam
// *   Time & Date : 23:41:34 30/11/2025
// **/
// #include <bits/stdc++.h>
// using namespace std;
// #define MESSI ios::sync_with_stdio(false); cin.tie(0);
// #define ll long long
// #define pb push_back
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
// #define gcd(a, b) __gcd((a), (b))
// #define nline '\n'
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// void rhafsolve()
// {
//     ll n;   cin>>n;
//     vector<ll> v(n);
//     for(int i=0;i<n;i++)    cin>>v[i];

//     ll a=0,b=0;
//     int l=0,r=n-1;
//     ll ans=0;
//     while(l<=r)
//     {
//         if(a<b)
//         {
//             a+=v[l];
//             l++;
//         }
//         else
//         {
//             b+=v[r];
//             r--;
//         }
//         if(a==b) ans=a;
//     }
//     cout<<ans<<endl;
// }
// //observation
// /**
 
//  **/
// int main() {
//     MESSI;

//     int t = 1;
//     // cin >> t;
//     while (t--) 
//     {
//         rhafsolve();
//     }

//     return 0;
// }


/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 22:00:58 30/11/2025
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
    ll n;  cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];

    ll a=0,b=0;
    ll l=1,r=n-2;
    a+=v.front();
    b+=v.back();
    ll ans=0;
    if(a==b) ans=a;
    while(l<=r)
    {
        if(a<b)
        {
            a+=v[l];
            l++;
        }
        else
        {
            b+=v[r];
            r--;
        }
        if(a==b) ans=a;

    }
    cout<<ans<<nline;
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
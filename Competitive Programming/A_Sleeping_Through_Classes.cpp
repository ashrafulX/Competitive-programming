// /**
// *   In the name of Allah, the Most Gracious, the Most Merciful.
// *   Author : Ashraful Islam
// *   Time & Date : 02:00:50 06/12/2025
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
// #define nl '\n'
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// void rhafsolve()
// {
//     int n,k;    cin>>n>>k;
//     string s;   cin>>s;
//     int ans=0;
//     for(int i=0;i<n;i++)
//     {
//         if(s[i]=='1')
//         {
//             int lim=i+k;
//             for(int j=i+1;j<lim+1;j++)
//             {
//                 if(j<n && s[j]=='1')
//                 {
//                     lim=j+k;
//                 }
//             }
//             i=lim;
//         }
//         else ans++;
//     }
//     cout<<ans<<nl;
// }
// //observation
// /**
 
//  **/
// int main() {
//     MESSI;

//     int t = 1;
//     cin >> t;
//     while (t--) 
//     {
//         rhafsolve();
//     }

//     return 0;
// }


/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 02:55:33 06/12/2025
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
    int n,k;    cin>>n>>k;
    int ans=0;
    string s;   cin>>s;
    int on=-1;
    for(int i=0;i<n;i++)
    {
        
        if(s[i]=='1')
        {
            // on=max(i+k,on);
            on=i+k;
        }
        else if(i>on) ans++;
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
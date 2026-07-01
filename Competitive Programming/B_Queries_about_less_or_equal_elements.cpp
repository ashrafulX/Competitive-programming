/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 05:13:02 03/12/2025
**/
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
    int n,m;    cin>>n>>m;
    pbds<int> p;
    for(int i=0;i<n;i++)
    {
        int x;    cin>>x;
        p.insert(x);
    }
    for(int i=0;i<m;i++)
    {
        int x;  cin>>x;
        ++x;
        cout<<p.order_of_key(x)<<" ";
    }
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

// //Two Pointer approach

// /**
// *   In the name of Allah, the Most Gracious, the Most Merciful.
// *   Author : Ashraful Islam
// *   Time & Date : 05:20:34 03/12/2025
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
//     int n,m;    cin>>n>>m;
//     vector<int> a(n),b(m);
//     for(int i=0;i<n;i++)    cin>>a[i];
//     for(int i=0;i<m;i++)    cin>>b[i];
//     vector<int> aa=b;
//     sort(all(a));
//     sort(all(b));
//     int l=0,r=0;
//     ll cnt=0;
//     ll ans=0;
//     map<int,int> mp;
//     while(l<n && r<m)
//     {
//         if(a[l]<=b[r])
//         {
//             cnt++;
//             l++;
//         }
//         else if(b[r]<a[l])
//         {
//             ans+=cnt;
//             mp[b[r]]=ans;
//             cnt=0;
//             r++;
//         }
//     }
//     while(r<m)
//     {
//         ans+=cnt;
//         mp[b[r]]=ans;
//         cnt=0;
//         r++;
//     }
//     for(auto val : aa)
//     {
//         cout<<mp[val]<<" ";
//     }
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
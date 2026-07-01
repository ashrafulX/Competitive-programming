/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 02:27:04 22/08/2025
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define MESSI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define yes cout << "YES\n"
#define no cout << "NO\n"
bool flag;
void rhafsolve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int m; cin>>m;
    string a,b; cin>>a>>b;
    for(int i=0;i<m;i++)
    {
        if(b[i]=='V')
        {
            s=a[i]+s;
        }
        else 
            s+=a[i];
    }
    cout<<s<<endl;
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



// /**
// *   In the name of Allah, the Most Gracious, the Most Merciful.
// *   Author : Ashraful Islam
// *   Time & Date : 01:57:04 22/08/2025
// **/
// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace std;
// using namespace __gnu_pbds;
// template <typename T>
// using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// #define MESSI ios::sync_with_stdio(false); cin.tie(nullptr);
// #define ll long long
// #define pb push_back
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
// #define gcd(a, b) __gcd((a), (b))
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// bool flag;
// void rhafsolve()
// {
//     int n;
//     cin>>n;
//     deque<char> dq;
//     for(int i=0;i<n;i++)
//     {
//         char ch;
//         cin>>ch;
//         dq.push_back(ch);
//     }
//     int m; cin>>m;
//     string a,b; cin>>a>>b;
//     for(int i=0;i<m;i++)
//     {
//         if(b[i]=='V')
//         {
//             dq.push_front(a[i]);
//         }
//         else
//             dq.push_back(a[i]);
//     }

//     for(auto ch : dq) cout<<ch;
//     cout<<endl;
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
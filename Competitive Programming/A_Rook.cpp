// /**
// *   In the name of Allah, the Most Gracious, the Most Merciful.
// *   Author : Ashraful Islam
// *   Time & Date : 19:45:23 04/08/2025
// **/
// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace std;
// using namespace __gnu_pbds;
// template <typename T>
// using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// #define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
// #define ll long long
// #define pb push_back
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
// #define gcd(a, b) __gcd((a), (b))
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// void rhafsolve()
// {
//     string s;
//     cin>>s;
//     char x=s[0];
//     char y=s[1];
//     for(int i=1;i<9;i++)
//     {
//         if(i==y-'0')
//             continue;
//         cout<<x<<i<<endl;
//     }
    
//     for(char a='a';a<='h';a++)
//     {
//         if(a==x)
//             continue;
//         cout<<a<<y<<endl;
        
//     }


// }
// int main() {
//     FAST_IO;

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
*   Time & Date : 20:25:45 04/08/2025
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
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
    char s;
    int n;
    cin>>s>>n;
    for(int i=1;i<=8;i++)
    {
        if(i !=n)
            cout<<s<<i<<endl;
    }
    for(char a='a';a<='h';a++)
    {
        if(a!= s)
            cout<<a<<n<<endl;
    }
}
int main() {
    FAST_IO;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
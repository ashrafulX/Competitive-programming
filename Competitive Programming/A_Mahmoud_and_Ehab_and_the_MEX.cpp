// /**
// *   In the name of Allah, the Most Gracious, the Most Merciful.
// *   Author : Ashraful Islam
// *   Time & Date : 01:14:27 15/10/2025
// **/
// #include <bits/stdc++.h>
// using namespace std;
// #define MESSI ios::sync_with_stdio(false); cin.tie(nullptr);
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
//     int n, k;   cin>>n>>k;
//     set<int> st;
//     for(int i=0;i<n;i++)
//     {
//         int x;  cin>>x;
//         st.insert(x);
//     }
//     if(k==0)
//     {
//         int first=*st.begin();
//         if(first == 0)
//         {
//             cout<<1<<endl;
//             return;
//         }
//         else
//         {
//             cout<<0<<endl;
//             return;
//         }
//     }

//     int cnt=0;
//     for(int i=0;i<k;i++)
//     {
//         if(st.find(i)==st.end())
//         {
//             cnt++;
//             st.insert(i);
//         }
//     }
//     if(st.find(k) != st.end()) cnt++;
//     cout<<cnt<<endl;
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
*   Time & Date : 19:43:27 14/10/2025
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
    int n, k;   cin>>n>>k;
    set<int> st;
    for(int i=0;i<n;i++)
    {
        int x;  cin>>x;
        st.insert(x);
    }
    int cnt=0;
    int i=0;
    if(k==0)
    {
        int first = *st.begin();
        if(first==0)
        {
            cout<<1<<endl;
            return;
        }
        else
        {
            cout<<0<<endl;
            return;
        }
    }
    set<int> ans;
    for(auto val : st)
    {
       if(val>=k)
       {
        break;
       }
       ans.insert(val);
    }

    
    for(auto val : ans)
    {
        if(val != i)
        {
            cnt++;
        }
        i++;
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
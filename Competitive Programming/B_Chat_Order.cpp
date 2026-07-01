/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 19:14:21 20/08/2025
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
    stack<string> st;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        st.push(s);
    }
    map<string,int> mp;

    for(int i=0;i<n;i++)
    {
        if(!mp.count(st.top()))
        {
            cout<<st.top()<<endl;
            mp[st.top()];
            st.pop();
        }
        else
        {
            st.pop();
        }
    }
    
}
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

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define pb push_back
// #define all(x) (x).begin(), (x).end()
// #define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

// int main() {
//     FAST_IO;
//     int n;
//     cin>>n;
//     vector<string> v(n);
//     map<string,int> mp;
//     vector<string> ans;
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//         mp[v[i]]++;
//     }

//     for(int i=0;i<n;i++)
//     {
//         if(mp[v[i]]>1)
//         {
//             mp[v[i]]--;
//         }
//         else
//             ans.pb(v[i]);
//     }
//     reverse(all(ans));
//     for(auto val : ans) cout<<val<<endl;

//     return 0;
// }
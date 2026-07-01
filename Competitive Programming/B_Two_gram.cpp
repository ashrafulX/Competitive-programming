/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 03:59:20 08/08/2025
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
bool flag;
void rhafsolve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==2)
    {
        cout<<s<<endl;
        return;
    }
    map<string,int> mp;
    for(int i=0;i<n-1;i++)
    {
        string ch="";
        ch+=s[i];
        ch+=s[i+1];
        mp[ch]++;
    }
    int mx=0;
    string ans;
    for(auto val : mp)
    {
        if(val.second>mx)
        {
            ans=val.first;
            mx= val.second;
        }
        // cout<<val.first<<" "<<val.second<<endl;
    }
    cout<<ans<<endl;
}
int main() {
    FAST_IO;

    int t = 1;
    // cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
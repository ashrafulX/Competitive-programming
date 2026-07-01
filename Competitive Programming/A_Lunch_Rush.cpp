/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:01:59 02/09/2025
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
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)
    {
        int x,y;    cin>>x>>y;
        v[i]={x,y};
    }
    
    int a=-1e9,b=-1e9;
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(v[i].second<=k)
        {
            a=max(a,v[i].first);
        }
        else if(v[i].second>k)
        {
            // b=v[i].first-(v[i].second-k);
            b=max(b,v[i].first-(v[i].second-k));
        }
        ans = max({ans, a, b});
    }
    cout<<ans<<endl;
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
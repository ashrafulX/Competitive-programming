/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 17:14:44 14/08/2025
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
    int n,m;
    cin>>n>>m;
    map<int,set<int>> mp;
    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        mp[u].insert(v);
        mp[v].insert(u);
    }
    int leaf,par,x,y;

    for(int i=1;i<=n;i++)
    {
        if(mp[i].size()==1)
        {
            leaf=i;
            break;
        }
    }

    for(int i=1;i<=n;i++)
    {
        if(mp[i].find(leaf) != mp[i].end())
        {
            par=i;
            break;;
        }
    }
    y=mp[par].size()-1;

    for(int i=1;i<=n;i++)
    {
        if(mp[i].find(par) != mp[i].end() && mp[i].size()>1)
        {
            x=mp[i].size();
        }
    }

    cout<<x<<" "<<y<<endl;
     

    // for(int i=0;i<n;i++)
    // {
    //         cout<<i<<" -> ";
    //     for(auto val : mp[i])
    //     {
    //         cout<<val<<" ";
    //     }
    //     cout<<endl;
    // }
    


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
/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:01:09 14/09/2025
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
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)     cin>>v[i];
    vector<int> date={0,0,0,1,2,2,3,5}; //0 0 0 1 2 2 3 5
    map<int,int> mp;
    for(int i=0;i<date.size();i++)
    {
        mp[date[i]]++;
    }

    int ans=-1;
    for(int i=0;i<n;i++)
    {
        

        if(mp.find(v[i]) != mp.end())
        {
            mp[v[i]]--;
            if(mp[v[i]]==0)
            {
                mp.erase(v[i]);
            }
        }
        if(mp.empty())
        {
            ans=i;
            break;
        }
    }

    if(ans==-1) cout<<0<<endl; else cout<<++ans<<endl;
    
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
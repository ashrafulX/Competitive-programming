/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 02:02:27 09/09/2025
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
    int n,k;    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)    cin>>a[i];

    sort(all(a));

    vector<vector<int>> ans(n);
    int idx=0;
    ans[idx].push_back(a[0]);
    for(int i=0;i<n-1;i++)
    {
        int val=abs(a[i]-a[i+1]);

        if(val>k)
        {
            idx++;
            ans[idx].push_back(a[i+1]);
        }
        else
        {
            ans[idx].push_back(a[i+1]);
        }
    }
    int mx=0;
    for(int i=0;i<n;i++)
    {
        mx=max((int)ans[i].size(),mx);
    }
    cout<<n-mx<<endl;
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
/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 18:31:33 23/08/2025
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
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int mnans=0,mxans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        
        
        int cnt=min(abs(a[i]-b[i]),9-abs(a[i]-b[i]));
        int cnt2=max(abs(a[i]-b[i]),9-abs(a[i]-b[i]));
        mnans+=cnt;
        mxans=min(cnt2-cnt ,mxans);
        
    }
    int rem=k-mnans;
    if(rem<0)
    {
        no;
    }
    else if(rem%2 == 0 || mxans<=rem) yes; 
    else no;

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

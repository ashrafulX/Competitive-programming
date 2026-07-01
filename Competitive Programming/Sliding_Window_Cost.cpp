/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 03:58:02 12/12/2025
**/
#include <bits/stdc++.h>
using namespace std;
#define MESSI ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
void rhafsolve()
{
    int n,k;       cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];

    int l=0,r=0;
    vector<int> store;
    while(r<n)
    {
        store.pb(v[r]);
        if(store.size()==k)
        {
            vector<int> a=store;
            sort(all(a));
            int idx=a.size()/2;
            // int mid=a[idx];
            nth_element(a.begin(),a.begin()+idx,a.end());
            int mid=a[idx];
            int ans=0;
            for(int i=0;i<a.size();i++)
            {
                ans+=abs(a[i]-mid);
            }
            r++;
            store.erase(store.begin());
            l++;
            cout<<ans<<" ";
            
        }
        else if(store.size()>k)
        {
            store.erase(store.begin());
            l++;
        }
        else if(store.size()<k)
        {
            r++;
        }
        
    }

}
//observation
/**
 
 **/
int32_t main() {
    MESSI;

    int t = 1;
    // cin >> t;
    while (t--) 
    {
        rhafsolve();
        cout<<nl;
    }

    return 0;
}
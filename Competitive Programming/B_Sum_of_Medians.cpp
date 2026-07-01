/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 14:05:56 17/10/2025
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
    int n,k;    cin>>n>>k;
    vector<int> v(n*k);
    for(int i=0;i<n*k;i++)    cin>>v[i];

    vector<int> ans;
    int mid=(n-1)/2;
    vector<int> sz;
    for(int i=0;i<n*k;i++)
    {
        if(sz.size()==n)
        {
            int mid=(n-1)/2;
            ans.pb(sz[mid]);
            sz.clear();
        }
        sz.pb(v[i]);
    }
    ll sum=0;
    for(auto val : ans) sum+=val;
    cout<<sum<<endl;
    


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
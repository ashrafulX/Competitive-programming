/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:01:50 12/11/2026
**/
#include <bits/stdc++.h>
using namespace std;
#define MESSI ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
void rhafsolve()
{
    int n; cin >> n;
    vector<int> v(n), left, mid;
    deque<int> ansArr;
    for(auto &x : v) cin >> x;
    sort(all(v));

    for(int i = 0; i < n; i++)
    {
        if(i == 0 || v[i] != v[i-1]) left.pb(v[i]); 
        else if(i == 1 || v[i] != v[i-2]) ansArr.push_front(v[i]); 
        else mid.pb(v[i]);      
    }

    cout << left.size() + ansArr.size() << nl;
    for(auto x : left) cout << x << " ";
    for(auto x : mid) cout << x << " ";
    for(auto x : ansArr) cout << x << " ";
    cout << nl;
}
//observation
/**
 
 **/
signed main() {
    MESSI;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
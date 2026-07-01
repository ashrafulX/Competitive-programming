/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 22:19:13 05/08/2025
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
    ll n,c,q;
    string s;
    cin>>n>>c>>q>>s;
    vector<pair<ll,ll>>opp(c);
    vector<pair<ll,ll>>seg(c);
    ll cur=n;
    for(ll i=0;i<c;i++)
    {
        ll l,r;
        cin>>l>>r;
        opp[i]={l,r};
        seg[i]={cur+1,cur+r-l+1};
        cur=seg[i].second;
    }
    // for(auto val : seg) cout<<val.first<<" "<<val.second<<endl;

    while(q--)
        {
            ll x;
            cin>>x;
            if(x>n)
            {
                for(ll i=c-1;i>=0;i--)
                {
                    if(x>=seg[i].first&&x<=seg[i].second)
                        x+=(opp[i].first-seg[i].first);
                }
            }
            cout<<s[x-1]<<endl;
        }
    
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
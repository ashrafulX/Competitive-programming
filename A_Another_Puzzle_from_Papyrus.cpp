/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 20:45:03 28/06/2026
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
    int n,c;    cin>>n>>c;
    vector<int> a(n),b(n);

    for(auto&i:a) cin>>i;
    for(auto&i:b) cin>>i;

    int nonsort=0;
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        if(a[i]<b[i])
        {
            flag=false;
            break;
        }
        nonsort+=(a[i]-b[i]);
    }
    if(!flag) nonsort=LLONG_MAX;

    sort(all(a));
    sort(all(b));

    flag=true;
    int srt=c;
    for(int i=0;i<n;i++)
    {
        if(a[i]<b[i])
        {
            flag=false;
            break;
        }
        srt+=(a[i]-b[i]);
    }

    if(!flag) srt=1e8;

    int ans=min(srt,nonsort);
    if(ans!=1e8) cout<<ans<<nl;
    else cout<<-1<<nl;
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
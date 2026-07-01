/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 17:53:54 04/03/2026
**/
#include <bits/stdc++.h>
using namespace std;
#define MESSI ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
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
    int n,x;    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];

    int ans=0;
    int cnt=0;
    sort(all(v));
    for(int i=0;i<n;i++)
    {
        cnt+=v[i];
        if(cnt==x)
        {
            ans++;
            cnt=0;
        }
        else if(cnt>x)
        {
            cnt=0;
            cnt+=v[i];
        }


    }
    if(ans==0) ans=1;
    cout<<ans<<nl;
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

/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 19:01:38 01/12/2025
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
#define nline '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
void rhafsolve()
{
    int n;  cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    sort(all(v));
    int ans=0;

    for(int i=2;i<=100;i++)
    {
        int cnt=0;
        int l=0,r=n-1;
        while(l<r)
        {   
            int sum=v[l]+v[r];
            if(sum==i)
            {
                cnt++;
                l++;r--;
            }
            else if(sum<i)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        ans=max(ans,cnt);
    }
    cout<<ans<<nline;


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
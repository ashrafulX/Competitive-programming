/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 01:02:56 25/02/2026
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
    int n,x,k;  cin>>n>>x>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    sort(rall(v));
    int i=0;
    while(k--)
    {
        x+=100;
        v[i]=0;
        i++;
    }

    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>x) ans++;
    }
    cout<<++ans<<nl;

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
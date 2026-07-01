/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 19:31:51 14/12/2025
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
    int n;      cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)    cin>>v[i];

    ll a=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            a=gcd(a,v[i]);
        }
        else
        {
            b=gcd(b,v[i]);
        }
    }
    bool flag=true;
    for(int i=0;i<n;i+=2)
    {
        if(v[i]%b==0)
        {
            flag=false;
            break;
        }
    }
    
    if(flag) 
    {
        cout<<b<<nl;
        return;
    }
    else 
    {
        flag=true;
        for(int i=1;i<n;i+=2)
        {
            if(v[i]%a==0)
            {
                flag=false;
                break;
            }
        }
    }
    if(flag) cout<<a<<nl;
    else cout<<0<<nl;

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
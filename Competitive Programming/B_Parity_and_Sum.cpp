/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 18:18:46 25/11/2025
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
#define yes cout << "YES\n"
#define no cout << "NO\n"
void rhafsolve()
{
    int n;  cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];

    ll odd=0,even=0;
    ll omx=0,emx=0;
    for(auto val : v)
    {
        if(val%2)
        {
            odd++;
            omx=max(omx,val);
        }
        else
        {
            even++;
            emx=max(emx,val);

        }
    }

    if(odd==0 || even==0)
    {
        cout<<0<<endl;
        return;
    }
    sort(all(v));
    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0 && v[i]<omx)
        {
            omx+=v[i];
        }
        
    }
    if(emx<omx) cout<<even<<endl;
    else cout<<++even<<endl;
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
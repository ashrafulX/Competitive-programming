/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 17:22:56 23/10/2025
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
    int n,k,q;  cin>>n>>k>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    for(int i=0;i<n;i++)
    {
        if(v[i]<=q)
        {
            v[i]=1;
        }
        else
        {
            v[i]=0;
        }
    }
    ll ans=0;

    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
        {
            cnt++;
            if(i==n-1 && cnt>=k)
            {
                ll val=cnt-k+1;
                ans+=val*(val+1)/2;
            }

        }
        else
        {
            if(cnt>=k)
            {
                ll val=cnt-k+1;
                ans+=val*(val+1)/2;
            }
            cnt=0;
        }
        
    }
    cout<<ans<<endl;
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
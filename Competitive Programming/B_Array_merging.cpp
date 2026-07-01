/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 00:57:02 09/01/2026
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
    int n;  cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n;i++)    cin>>b[i];

    map<int,int> aa,bb;
    int cnt=1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1]) 
        {
            cnt++;
        }
        else
        {
            aa[a[i]]=max(cnt,aa[a[i]]);
            cnt=1;
        }
    }
    
    aa[a[n-1]]=max(cnt,aa[a[n-1]]);
    cnt=1;
    for(int i=0;i<n-1;i++)
    {
        if(b[i]==b[i+1])
        {
            cnt++;
        }
        else
        {
            bb[b[i]]=max(cnt,bb[b[i]]);
            cnt=1;
        }
    }

    bb[b[n-1]]=max(cnt,bb[b[n-1]]);
    int ans=1;

    for(int i=1;i<=2*n;i++)
    {
        int val=aa[i]+bb[i];
        ans=max(ans,val);
    }
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
/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 20:47:38 20/11/2025
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
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];

    if(v[0]==-1 && v[n-1]==-1)
    {
        v[0]=0;
        v[n-1]=0;
    }
    else if(v[0]==-1)
    {
        v[0]=v[n-1];
    }
    else if(v[n-1]==-1)
    {
        v[n-1]=v[0];
    }
    
    for(int i=0;i<n;i++)
    {
        if(v[i]==-1)
            v[i]=0;
    }
    cout<<llabs(v[n-1]-v[0])<<endl;
    for(auto val : v) cout<<val<<" ";
    cout<<endl;
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
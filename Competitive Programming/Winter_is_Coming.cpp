/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 20:35:30 14/01/2026
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
    int n,a,b;  cin>>n>>a>>b;
    vector<int> v(n);
    bool flag=false;
    for(int i=0;i<n;i++)    cin>>v[i];
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]<a)
        {
            if(!flag)
            {
                flag=true;
                cnt++;
            }
        }
        else if(v[i]>b)
        {
            flag=false;
        }
    }
    cout<<cnt<<nl;
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
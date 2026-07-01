/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 20:52:50 15/02/2026
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
    int n;  cin >> n;

    vector<int> v(n+1);
    for(int i=1;i<=n;i++)    cin>>v[i];

    vector<int> a,b;   
    for(int i=1;i<=n;i*2)
    {
        a.pb(v[i]);
    }
    for(int i=2;i<=n;i*=2)
    {
        b.pb(v[i]);
    }
    sort(all(a));
    sort(all(b));

    vector<int> c;
    


    
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
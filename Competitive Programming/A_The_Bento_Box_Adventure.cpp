/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 02:19:52 08/12/2025
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
    // vector<int> v;
    // int n;
    // v.push_back(0);
    // while(cin>>n)
    // v.push_back(n);
    // sort(all(v));
    // for(int i=1;i<=v.size();i++)
    // {
    //     if(v[i]!=i)
    //     {
    //         cout<<i<<nl;
    //         return;
    //     }
    // }

    int a,b,c,d;    cin>>a>>b>>c>>d;
    cout<<15-(a+b+c+d)<<nl;
}
//observation
/**
 
 **/
int main() {
    MESSI;

    int t = 1;
    // cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
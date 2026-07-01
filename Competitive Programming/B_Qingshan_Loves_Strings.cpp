/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 19:56:22 17/04/2026
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
    int n,m;    cin>>n>>m;
    string s,t; cin>>s>>t;
    for(int i=0;i+1<m;i++)
    {
        if(s[i] == s[i+1]) {
            no;
            return;
        }
    }
    if(t[0]=='1' && t[1]=='0' && t[m-2]=='0' && t[m-1]=='1') yes; 
    else if(t[0]=='0' && t[1]=='1' && t[])
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
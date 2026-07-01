/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 19:43:59 19/04/2026
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
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int a;  cin>>a;
        if(i==0 || a != v.back()) v.pb(a);
    }
    int cur=v.size();
    int cnt=0;
    for(int i=0;i<v.size();i++)
    {
        if((i==0 || v[i-1]>v[i]) && (i==cur-1|| v[i]<v[i+1] ))
        cnt++;
    }
    if(cnt==1) yes; else no;
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
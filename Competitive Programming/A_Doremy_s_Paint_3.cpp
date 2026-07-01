/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 17:55:21 02/08/2025
**/
#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
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
    int n;
    cin>>n;

    vector<int> v(n);
    map<int,int> mp;

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }

    if(mp.size()==1)
    {
        yes;
        return;
    }

    if(mp.size()>2)
    {
        no;
        return;
    }

    int a=0,b=0;
    for(auto x:mp)
    {
        if(a==0) a=x.second;
        else b=x.second;
    }

    if(abs(a-b)<=1) yes;
    else no;
}
int main() {
    FAST_IO;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
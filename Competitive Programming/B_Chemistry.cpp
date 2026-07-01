/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 17:18:26 18/10/2025
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
    int n,k;    cin>>n>>k;
    string s;   cin>>s;
    map<char,int> mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }

    int odd=0;
    for(auto val : mp)
    {
        if(val.second%2!=0) odd++;
    }
    if(odd-k>1) no; else yes;
    

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
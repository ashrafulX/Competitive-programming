/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:10:11 26/02/2026
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
bool solve(string& a)
{
    // for(int i=0;i+1<a.size();i+=2)
    // {
    //     if(a[i]!='?' && a[i+1] !='?' && a[i]==a[i+1] )
    //     return false;
    // }
    // return true;
    
}
void rhafsolve()
{
    int n;  cin>>n;
    string s;   cin>>s;
    if(n%2 !=0)
    {
        if(s[0]=='b')
        {
            no;
            return;
        }
        else s.erase(0,1);
    }
    if(solve(s)) yes; else no;
    
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


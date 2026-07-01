/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 06:35:35 29/10/2025
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
    string s;   cin>>s;
    string ans="";
    for(int i=0;i<n;i++)
    {
        if(i+2<n && s[i+2] == '0')
        {
            int val=s[i]-'0';
            val+=96;
            ans.push_back(val);
        }
        else
        {
            int val=s[i]-'0';
            val+=96;
            ans.pb(val);
        }
    }
    cout<<ans<<endl;
    
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
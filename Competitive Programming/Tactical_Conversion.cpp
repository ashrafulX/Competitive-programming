/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 20:45:22 22/10/2025
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
    bool flag=true;
    for(int i=0;i<n-4;i++)
    {
        if(s[i]=='1' && s[i+1]=='1')
        {
            if(i+2>=n||s[i+2]=='0')
            {
                flag=false;
                break;
            }
            if(i+2>=n||(s[i+2]=='1' && s[i+3]=='0'))
            {
                flag=false;
                break;
            }
        }
    }
    if(flag) yes; else no;
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
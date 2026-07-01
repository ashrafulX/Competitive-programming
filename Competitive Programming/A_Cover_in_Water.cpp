/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:33:58 18/10/2025
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
    bool flag=false;
    int block=0,dot=0;
    for(auto ch : s)
    {
        if(ch=='#') block++;
        else dot++;
    }
    if(block==n)
    {
        cout<<0<<endl;
        return;
    }
    for(int i=1;i<n-1;i++)
    {
        if(s[i-1]=='.' && s[i]=='.' &&s[i+1]=='.')
        {
            flag=true;
            break;
        }
    }
    if(flag) cout<<2<<endl;
    else cout<<dot<<endl;
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
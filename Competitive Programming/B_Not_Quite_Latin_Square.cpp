/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 01:04:44 15/04/2026
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
    // unordered_map<char,int> mp;
    vector<char> v(3,0);
    for(int i=0;i<3;i++) 
    {
        for(int j=0;j<3;j++)
        {
            char ch;
            cin>>ch;
            if(ch>='A' && ch<='C')
            {
                v[ch-'A']+=1;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        if(v[i] !=3)
        {
            cout<<char(i+'A')<<nl;
            break;
        }
    }

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
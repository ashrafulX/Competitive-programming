/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 05:22:49 28/02/2026
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
    int red=0,blue=0,dec=0;
    for(int i=0;i<n;i++)
    {
        int x;  cin>>x;
        if(x==1)
        {
            red++;
        }
        else if(x==2)
        {
            blue++;
        }
        else dec++;
    }
    while(dec!=0)
    {
        if(red>blue)
        {
            blue++;
        }
        else if(blue>red)
        {
            red++;
        }
        else
        {
            blue++;
        }
        dec--;
    }
    if(blue==red) yes; else no;
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
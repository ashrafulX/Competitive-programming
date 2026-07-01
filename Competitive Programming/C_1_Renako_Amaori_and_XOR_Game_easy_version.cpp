/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:12:55 20/11/2025
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
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int diff=0;
    int last=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            diff ^=1;
            last=i+1;
        }
    }
    if(diff==0)
    {
        cout<<"Tie"<<endl;
    }
    else
    {
        if(last%2!=0)
        {
            cout<<"Ajisai"<<endl;
        }
        else
        {
            cout<<"Mai"<<endl;
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
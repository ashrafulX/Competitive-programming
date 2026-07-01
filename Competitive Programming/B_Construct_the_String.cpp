/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 05:39:38 31/10/2025
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
    int a,b,c;  cin>>a>>b>>c;
    string s="";
    int cnt=0;
    for(char i='a';i<='z';i++)
    {
        s+=i;
        cnt++;
        if(cnt==c) break;
    }
    string tmp=s;
    while(s.size()<a)
    {
        s+=tmp;
    }
    for(int i=0;i<a;i++)
    {
        cout<<s[i];
    }
    cout<<endl;
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
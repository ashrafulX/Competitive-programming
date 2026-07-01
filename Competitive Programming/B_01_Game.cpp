/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 04:35:57 17/10/2025
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
    string s;   cin>>s;
    int zero=0,one=0;
    for(char c : s)
    {
        if(c=='0') zero++;
        else one++;
    }
    int val=1;
    bool flag=true;

    if(zero==0 or one==0)
    {
        cout<<"NET"<<endl;
        return;
    }
    while(true)
    {
        if(zero==0 or one==0)
        {
            break;
        }
        if(val%2 != 0)
        {
            zero--;one--;
            flag=true;
        }
        else
        {
            zero--;one--;
            flag=false;
        }
        val++;
    }
    if(flag) cout<<"DA"<<endl;
    else cout<<"NET"<<endl;
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
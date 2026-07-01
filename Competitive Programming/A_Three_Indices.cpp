/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 04:33:50 15/10/2025
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
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];

    bool flag=false;
    vector<int> ans;
    for(int i=1;i<n-1;i++)
    {
        if(v[i]>v[i-1] && v[i]>v[i+1])
        {
            flag=true;
            ans.push_back(i-1);
            ans.push_back(i);
            ans.push_back(i+1);
            break;
        }
    }
    if(flag)
    {
        yes;
        for(auto val : ans) cout<<++val<<" ";
        cout<<endl;
    }
    else no;
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

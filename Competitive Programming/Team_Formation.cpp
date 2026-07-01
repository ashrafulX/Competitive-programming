/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 04:17:33 21/08/2025
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define MESSI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define yes cout << "YES\n"
#define no cout << "NO\n"
bool flag;
void rhafsolve()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int a10=0,a01,a11,a00;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='1' && b[i]=='0')
        a10++;
        else if(a[i]=='0' && b[i]=='1')
        a01++;
        else if(a[i]=='1' && b[i]=='1') 
        a11++;
        else a00++;
    }
    int team=0;
    int val=min(a10,a01);
    team+=val;
    int firstremain=(a10+a01)-val;
    
}
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
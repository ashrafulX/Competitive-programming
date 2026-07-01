/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 17:59:59 05/09/2025
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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    int ans=0;
    int x=0,y=0;

    if(a>c) x++; else if(a!=c) y++;
    if(b>d) x++; else if(b!=d) y++;
    if(x>y) ans++;

    x=0,y=0;
    if(a>d) x++; else if(a!=d) y++;
    if(b>c) x++; else if(b!=c) y++;
    if(x>y) ans++;

    x=0,y=0;
    if(b>c) x++; else if(b!=c) y++;
    if(a>d) x++; else if(a!=d) y++;
    if(x>y) ans++;

    x=0,y=0;
    if(a>c) x++; else if(a!=c) y++;
    if(b>d) x++; else if(b!=d) y++;
    if(x>y) ans++;
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
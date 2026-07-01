/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 01:28:06 04/09/2025
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
    int a,b,c,d;    cin>>a>>b>>c>>d;
    bool cok=false,dok=false;
    if(b<a) swap(a,b);
    for(int i=a;i<=b;i++)
    {
        if(i==c)
        {
            cok=true;
        }
        if(i==d) dok=true;
    }
    if(!cok && !dok)
    {
        no;
        return;
    }
    if(cok && dok) 
    {
        no;
        return;
    }
    if(cok && !dok)
    {
        yes;
        return;
    }
    if(!cok && dok)
    {
        yes;
        return;
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
/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 23:41:17 17/08/2025
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
            a++;
                else b++;
    }
    if(k==b)
    {
        cout<<0<<endl;
    }
    else if(b<k)
    {
        cout<<1<<endl;
        int diff = k - b;
        int a_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
                a_count++;
            if (a_count == diff)
            {
                cout << i + 1 << " " << 'B' << endl;
                return;
            }
        }
    }
    else if(k<b)
    {
        cout<<1<<endl;
        int diff = b - k;
        int b_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
                b_count++;
            if (b_count == diff)
            {
                cout << i + 1 << " " << 'A' << endl;
                return;
            }
        }
    }

}
int main() {
    FAST_IO;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
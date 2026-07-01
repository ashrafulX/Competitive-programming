/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 02:40:30 03/09/2025
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
    int n,m,q;
    cin>>n>>m>>q;
    vector<int> v(m);
    for(int i=0;i<m;i++)     cin>>v[i];


    sort(all(v));
    while(q--)
    {
        int a;      cin>>a;
        if(a<v[0])
        {
            cout<<v[0]-1<<endl;
            continue;
        }
        else if(a>v[m-1])
        {
            cout<<n-v[m-1]<<endl;
            continue;
        }
        else
        {
            auto front=upper_bound(all(v),a);
            auto back=front;
            back--;
            int Front=*front;
            int Back=*back;
            cout<<(Front-Back)/2<<endl;
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
/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 15:34:44 05/09/2025
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
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    sort(all(v));
    // for(auto val : v) cout<<val<<" "; cout<<endl;

    // int val=-1;
    // for(int i=0;i<n;i++)
    // {
    //     if(v[i] != i )
    //     {
    //         val=i;
    //         break;
    //     }
    // }
    // if(val==-1)
    // {
    //     cout<<n<<endl;
    // }
    // else cout<<val<<endl;

    v.erase(unique(all(v)),v.end());
    bool freq[n+1]={false};
    for(int i=0;i<n;i++)
    {
        if(v[i]==i)
        {
            freq[i]=true;
        }

    }
    for(int i=0;i<=n;i++)
    {
        if(!freq[i])
        {
            cout<<i<<endl;
            break;
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
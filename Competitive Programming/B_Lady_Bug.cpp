/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 04:10:21 23/08/2025
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
    cin >> n;
    string a, b;
    cin >> a >> b;
    
    if (a == b) {
        cout << "YES" << endl;
        return;
    }
    
    int ones_a = 0, ones_b = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == '1') ones_a++;
        if (b[i] == '1') ones_b++;
        if (ones_b > ones_a) {
            cout << "NO" << endl;
            return;
        }
    }
    
    cout << "YES" << endl;


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
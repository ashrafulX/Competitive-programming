/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:34:55 13/09/2025
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    map<int, int> cnt;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }

    for (auto val : cnt)
    {
        if (val.second % k != 0)
        {
            cout << 0 << "\n";
            return;
        }
    }

    ll ans = 0;
    int l = 0;
    map<int, int> cur_cnt;

    for (int r = 0; r < n; ++r)
    {
        cur_cnt[a[r]]++;
        while (cur_cnt[a[r]] * k > cnt[a[r]])
        {
            cur_cnt[a[l]]--;
            l++;
        }
        ans += (r - l + 1);
    }
    cout << ans << endl;
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
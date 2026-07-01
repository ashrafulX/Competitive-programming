/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 05:20:00 22/07/2025
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

void rhafsolve()
{
    char a[8][8];
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++)
            cin >> a[i][j];

    // Check if any full row is RRRRRRRR
    for(int i = 0; i < 8; i++) {
        bool allR = true;
        for(int j = 0; j < 8; j++) {
            if (a[i][j] != 'R') {
                allR = false;
                break;
            }
        }
        if (allR) {
            cout << 'R' << '\n';
            return;
        }
    }

    // If no full R row found, then it's B
    cout << 'B' << '\n';
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

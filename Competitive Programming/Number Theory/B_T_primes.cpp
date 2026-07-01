#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    FAST_IO;

    ll t = 1;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        map<ll, int> mp;

        for (ll i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                mp[i]++;
                if (i != n / i) {
                    mp[n / i]++;
                }
            }
        }

        bool flag = true;
        for (auto val : mp) {
            if (val.second > 1) {
                flag = false;
                break;
            }
        }

        if (mp.size() == 3 && flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

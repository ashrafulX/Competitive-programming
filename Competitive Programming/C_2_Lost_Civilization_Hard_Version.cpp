#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n+2);
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        
        vector<int> start(n+2);
        start[1] = 1;
        for (int i = 2; i <= n; ++i) {
            if (a[i] == a[i-1] + 1) {
                start[i] = start[i-1];
            } else {
                start[i] = i;
            }
        }
        
        ll answer = 0;
        for (int i = 1; i <= n; ++i) {
            ll ways_l;
            if (start[i] == i) {
                ways_l = i;               // l = 1..i
            } else {
                ways_l = 1;               // only l = i
            }
            ll ways_r = n - i + 1;
            answer += ways_l * ways_r;
        }
        
        cout << answer << '\n';
    }
}
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        
        vector<pair<int, int>> coprime_pairs;
        
        // Find all coprime pairs
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                if (gcd(a[i], a[j]) == 1) {
                    coprime_pairs.push_back({i, j});
                }
            }
        }
        
        bool found = false;
        
        // Try to find two coprime pairs with distinct indices
        for (int i = 0; i < coprime_pairs.size() && !found; i++) {
            for (int j = i + 1; j < coprime_pairs.size() && !found; j++) {
                int p1 = coprime_pairs[i].first;
                int q1 = coprime_pairs[i].second;
                int p2 = coprime_pairs[j].first;
                int q2 = coprime_pairs[j].second;
                
                // Check if all four indices are distinct
                set<int> indices = {p1, q1, p2, q2};
                if (indices.size() == 4) {
                    cout << p1 << " " << q1 << " " << p2 << " " << q2 << "\n";
                    found = true;
                }
            }
        }
        
        if (!found) {
            cout << "0\n";
        }
    }
    
    return 0;
}
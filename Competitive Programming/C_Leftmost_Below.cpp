#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<long long> b(n);
        
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        stack<long long> st;
        bool valid = true;
        
        for (int i = n - 1; i >= 0 && valid; i--) {
            long long curr = b[i];
            
            // Remove all operations from stack that are <= curr
            while (!st.empty() && st.top() <= curr) {
                curr -= st.top();
                st.pop();
            }
            
            if (curr < 0) {
                valid = false;
            } else if (curr > 0) {
                st.push(curr);
            }
        }
        
        cout << (valid ? "YES" : "NO") << "\n";
    }
    
    return 0;
}
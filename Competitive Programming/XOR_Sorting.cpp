#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T; 
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        
        if (K >= (1 << ((int)ceil(log2(N))))) {
            cout << -1 << '\n';
            continue;
        }

        if (K == 0) {
            for (int i = 1; i <= N; i++) cout << i << " ";
            cout << '\n';
            continue;
        }

        vector<int> A(N);
        iota(A.begin(), A.end(), 1);

        vector<int> res(N);
        for (int i = 0; i < N; i++) {
            int x = i ^ K;
            if (x < N)
                res[x] = A[i];
            else
                res[i] = A[i];
        }

        for (int i = 0; i < N; i++) cout << res[i] << " ";
        cout << '\n';
    }
}

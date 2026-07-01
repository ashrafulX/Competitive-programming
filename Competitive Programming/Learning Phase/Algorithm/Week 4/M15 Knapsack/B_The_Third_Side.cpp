#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        priority_queue<int> pq;
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            pq.push(a);
        }

        while (pq.size() > 1) {
            int a = pq.top(); 
                pq.pop();
            int b = pq.top();
                pq.pop();
            int x = a + b - 1;
                pq.push(x);
        }

        cout << pq.top() << '\n';
    }

    return 0;
}
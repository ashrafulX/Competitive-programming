#include<bits/stdc++.h>
using namespace std;

bool solve(int n) {
    while (n > 1) {
        if (n % 2 == 0) {
            n/= 2; 
        } else if (n - 3 >= 1) {
            n -= 3;
        } else {
            return false;
        }
    }
    return n == 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (solve(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        int magicCount = 0;
        for (int len = n; len >= 1; len--) {
            for (int i = 0; i <= n - len; i++) {
                for (int j = 0; j <= n - len; j++) {
                    if (a[i][j] < 0) {
                        int add_value = -a[i][j];  
                        for (int k = 0; k < len; k++) {
                            a[i + k][j + k] += add_value;
                        }
                        magicCount += add_value;
                    }
                }
            }
        }

        cout << magicCount << endl;
    }

    return 0;
}

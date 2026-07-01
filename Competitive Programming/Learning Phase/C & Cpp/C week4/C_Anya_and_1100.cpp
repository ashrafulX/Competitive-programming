#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool is1100(const string& s, int i) {
    if (i + 3 >= s.size()) return false;
    return s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int q;
        cin >> q;

        int count1100 = 0;
        for (int i = 0; i + 3 < s.size(); ++i) {
            if (is1100(s, i)) {
                ++count1100;
            }
        }


        while (q--) {
            int i, v;
            cin >> i >> v;
            --i;
            for (int j = max(0, i - 3); j <= min((int)s.size() - 4, i); ++j) {
                if (is1100(s, j)) --count1100;
            }

            s[i] = v + '0';

            for (int j = max(0, i - 3); j <= min((int)s.size() - 4, i); ++j) {
                if (is1100(s, j)) ++count1100;
            }

            
            if (count1100 > 0) {
                 cout << "YES" << '\n';
            } else {
             cout << "NO" << '\n';
}

        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
bool isPerfectMelody(const vector<int>& notes) {
    for (int i = 1; i < notes.size(); ++i) {
        int interval = abs(notes[i] - notes[i - 1]);
        if (interval != 5 && interval != 7) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> notes(n);
        for (int i = 0; i < n; ++i) {
            cin >> notes[i];
        }

        cout << (isPerfectMelody(notes) ? "YES" : "NO") << endl;
    }

    return 0;
}

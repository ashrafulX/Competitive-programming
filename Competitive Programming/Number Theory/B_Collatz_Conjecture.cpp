#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    FAST_IO;

    int t = 1;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        while (a > 1)
        {
            int d = b - (a % b);
            if (d >= c)
            {
                a += c;
                c = 0;
            }
            else
            {
                c -= d;
                a += d;
            }
            while (a % b == 0)
            {
                a = a / b;
            }
            if (c <= 0)
                break;
        }
        if (c > 0)
        {
            c = c % (b - 1);
            a += c;
            while (a % b == 0)
            {
                a = a / b;
            }
        }
        cout << a << endl;
    }

    return 0;
}

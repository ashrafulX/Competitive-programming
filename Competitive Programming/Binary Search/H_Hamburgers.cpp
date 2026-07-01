#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    FAST_IO;

int t=1;
// cin>>t;
while(t--)
{
    string s;
    cin >> s;
    vector<ll> n(3), p(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> n[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> p[i];
    }
    ll r;
    cin >> r;
    int b = 0, ss = 0, c = 0;
    for (char ch : s)
    {
        if (ch == 'B')
            b++;
        else if (ch == 'S')
            ss++;
        else
            c++;
    }

    auto ok = [&](ll val)
    {
        ll bneed = max(0LL, val * b - n[0]);
        ll ssneed = max(0LL, val * ss - n[1]);
        ll cneed = max(0LL, val * c - n[2]);
        ll cnt = bneed * p[0] + ssneed * p[1] + cneed * p[2];
        return cnt <= r;
    };

    ll i = 0, j = 1e13, ans = 0, mid;
    while (i <= j)
    {
        mid = i + (j - i) / 2;
        if (ok(mid))
        {
            ans = mid;
            i = mid + 1;
        }
        else
            j = mid - 1;
    }
    cout << ans << endl;
}

   return 0;
}

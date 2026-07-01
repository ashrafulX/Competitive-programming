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
    string a, b;
    cin >> a >> b;
    int n = a.size();
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    auto ok = [&](int mid)
    {
        vector<bool> bad(n + 1);
        for (int i = 0; i < mid; i++)
        {
            bad[v[i]] = true;
        }
        int j = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[j] && !bad[i + 1])
            {
                j++;
            }
            if (b.size() == j)
            {
                flag = true;
                break;
            }
        }
        return flag;
    };
    int l = 0, r = n, ans, mid = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            l = mid + 1;
            ans = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
}

   return 0;
}

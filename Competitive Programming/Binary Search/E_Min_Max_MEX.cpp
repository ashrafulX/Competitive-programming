#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    FAST_IO;

int t=1;
cin>>t;
while(t--)
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    auto ok = [&](ll mid)
    {
        ll cnt = 0;
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= mid)
            {
                st.insert(v[i]);
            }
            if (st.size() == mid + 1)
            {
                cnt++;
                st.clear();
            }
        }
        return cnt;
    };

    ll l = 0, r = n, ans = -1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (ok(mid) >= k)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans + 1 << endl;
    
}

   return 0;
}

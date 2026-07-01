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
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n), b(n), c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i] >> c[i];
        }

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            v[i] = i;
        }

        auto ok = [&](int index1, int index2)
        {
            return a[index1] < a[index2];
        };

        sort(all(v), ok);

        ll cur = m;
        int idx = 0;
        priority_queue<ll> pq;

        while (true)
        {

            while (idx < n && a[v[idx]] <= cur)
            {
                pq.push(c[v[idx]]);
                idx++;
            }

            while (!pq.empty() && pq.top() <= cur)
            {
                pq.pop();
            }

            if (pq.empty())
                break;

            cur = pq.top();
            pq.pop();
        }

        cout << cur << endl;;
    }

    return 0;
}

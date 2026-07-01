/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:45:38 25/04/2026
**/
#include <bits/stdc++.h>
using namespace std;
#define MESSI ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
void rhafsolve() {
    int n, m;   cin >> n >> m;

    priority_queue<int> pq[2];
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        pq[i % 2].push(x);
    }

    int query[2] = {0, 0};
    for (int i = 0, x; i < m; i++)
    {
        cin >> x;
        query[x % 2]++;
    }

    int take = 0;

    for (int p : {0, 1})
    {
        int flag = query[p];
        bool any = false;

        while (flag > 0 && !pq[p].empty())
        {
            int val = pq[p].top();
            pq[p].pop();

            if (val >= 0 || !any)
            {
                take += val;
                any = true;
                flag--;
            }
           else break;
        }
    }

    cout << sum - take << nl;
}
//observation
/**
 
 **/
signed main() {
    MESSI;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
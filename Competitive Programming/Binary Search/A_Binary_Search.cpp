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
    ll n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (m--)
    {
        int a;
        cin >> a;
        int l = 0, r = n - 1;
        bool flag = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] == a)
            {
                flag = true;
                break;
            }
            else if (v[mid] > a)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

   return 0;
}

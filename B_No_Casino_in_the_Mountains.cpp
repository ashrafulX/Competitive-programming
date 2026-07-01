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
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int cnt = 0;
    int i = 0;
    while (i <= n - m)
    {
        int bad = 0;

        for (int j = 0; j < m; j++)
        {
            if (v[i + j] == 1)
            {
                bad = 1;
                break;
            }
        }

        if (bad == 0)
        {
            cnt++;
            i += m + 1;
        }
        else
        {
            i++;
        }
    }

    cout << cnt << endl;
    
}

   return 0;
}

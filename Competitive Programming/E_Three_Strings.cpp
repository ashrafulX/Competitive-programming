/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
**/
#include <bits/stdc++.h>
using namespace std;
#define MESSI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

const int N = 1e3 + 9, inf = 1e4;
int n, m, l, dp[N][N];
string a, b, c;

int solve(int i, int j, int k)
{
    if (k >= l)
    {
        return 0;
    }

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    int ans = inf;
    if (i < n)
    {
        if (a[i] == c[k])
        {
            ans = min(ans, solve(i + 1, j, k + 1));
        }
        else
        {
            ans = min(ans, 1 + solve(i + 1, j, k + 1));
        }
    }
    if (j < m)
    {
        if (b[j] == c[k])
        {
            ans = min(ans, solve(i, j + 1, k + 1));
        }
        else
        {
            ans = min(ans, 1 + solve(i, j + 1, k + 1));
        }
    }

    return dp[i][j] = ans;
}

void rhafsolve()
{
    cin >> a >> b >> c;
    n = a.size();
    m = b.size();
    l = c.size();

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << solve(0, 0, 0) << endl;
}
int main() {
    MESSI;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}




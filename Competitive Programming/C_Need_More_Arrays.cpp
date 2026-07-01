#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &v, int i, int last)
{
    if (i == v.size())
        return 0;
    if (v[i] > last + 1)
        return 1 + solve(v, i + 1, v[i]);
    return solve(v, i + 1, last);
}

int main() {
    int t;  cin>>t;
    while(t--)
    {
        int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    cout << 1 + solve(v, 1, v[0]) << endl;
    }
}

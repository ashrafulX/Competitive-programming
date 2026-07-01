#include <bits/stdc++.h>
using namespace std;
#define MESSI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define yes cout << "YES\n"
#define no cout << "NO\n"
void rhafsolve()
{
    int n,k;    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];

    for (int i = 0; i < k; i++) 
    {
        int nxt = v.back() + 1;
        if(nxt > n) nxt = 1;
        cout << nxt;
        if (i < k - 1) 
            cout << " ";
        v.push_back(nxt);
    }
    cout << endl;
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
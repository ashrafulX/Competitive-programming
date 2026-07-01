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
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    ll res;
    if (n == 2) 
    {
        res = min(a[0] + a[1], a[0] + min(a[1], a[0]));

    } 
    else 
    {
        ll first = a[0], second = a[1], third = a[2];
        ll a = first + second;
        ll b = first + min(second + third, first);
        res = min(a, b);
    }

    cout << res <<endl;

}

   return 0;
}

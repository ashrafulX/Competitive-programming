#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<ll> a(n);

        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        ll mn = a[0];
        ll g = 0;

        
        for (int i = 1; i < n; ++i) 
        {
            if (a[i] % mn == 0) 
            {
                g = __gcd(g, a[i]);
            }
        }
        
    
        if (g != 0 && mn == g)
            cout << "Yes"<<endl;
                else
                    cout << "No"<<endl;
    }
    return 0;
}
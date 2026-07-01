
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
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll val = a[n - 1];

    if (val != b[0])
    {
        cout << "NO" << endl;
        
        continue;
    }

    bool flag = true;

    for (int i = 0; i < n-1; i++)
    {
        if (a[i] % a[i + 1] != 0)
        {
            flag = false;
            break;
        }
        if (b[i + 1] % b[i] != 0)
        {
            flag = false;
            break;
        }
        if (__gcd(a[i], b[i + 1]) != val)
        {
            flag = false;
            break;
        }
    }

        if(flag)
            cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
}

   return 0;
}

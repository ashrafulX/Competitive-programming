#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    FAST_IO;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        sort(all(v));
        ll mn = v[0];
        int cnt = count(all(v), mn); 
        bool flag = false;

        for (int i = cnt; i < n; i++)
        {
            if (v[i] % mn != 0)
            {
                flag = true;
                break;
            }
        }

      
        if (cnt==1||flag)
            cout << "YES"<<endl;
                else
                    cout << "NO"<<endl;;
    }

    return 0;
}

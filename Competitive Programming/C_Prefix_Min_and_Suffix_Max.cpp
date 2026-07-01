/*
    #include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    FAST_IO;

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            bool f1 = true;
            int val = v[i];
            for (int j = i - 1; j >= 0; j--)
            {
                if (v[j] < val)
                {
                    f1 = false;
                    break;
                }
            }
            bool f2 = true;
            for (int k = i + 1; k < n; k++)
            {
                if (v[k] > val)
                {
                    f2 = false;
                    break;
                }
            }
            if (f1 || f2)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }

    return 0;
}

*/
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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> pre(n), suf(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = min(pre[i - 1], v[i]);
    }

    suf[n - 1] = v[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        suf[i] = max(suf[i + 1], v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        bool f1 = true;
        if (i > 0)
        {
            if (pre[i - 1] < v[i])
            {
                f1 = false;
            }
        }

        bool f2 = true;
        if (i < n - 1)
        {
            if (suf[i + 1] > v[i])
            {
                f2 = false;
            }
        }

        if (f1 || f2)
            cout << 1;
        else
            cout << 0;
    }
    cout << endl;
}

   return 0;
}

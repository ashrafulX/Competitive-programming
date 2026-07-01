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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    vector<int> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }
    while (k--)
    {
        int a;
        cin >> a;
        // int l=0,r=n-1,ans=-1,mid;
        // while(l<=r)
        // {
        //     mid=(l+r)/2;
        //     if(pre[mid]>=a)
        //     {
        //         ans=mid;
        //         r=mid-1;
        //     }
        //     else
        //     {
        //         l=mid+1;
        //     }
        // }

        // if(ans == -1)
        //     cout<<-1<<endl;
        //         else
        //             cout<<++ans<<endl;

        auto it = lower_bound(all(pre), a);
        int idx = it - pre.begin();
        if (it == pre.end())
            cout << -1 << endl;
        else
            cout << ++idx << endl;
    }
}

   return 0;
}

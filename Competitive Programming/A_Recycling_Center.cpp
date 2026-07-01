/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:06:50 27/07/2025
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
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
    int n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(all(v));
    ll coin = 0;

    while (!v.empty())
    {
        int idx = -1;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] <= m)
            {
                idx = i;
            }
        }

        if (idx == -1)
        {
            coin++;
            v.erase(v.begin());
        }
        else
        {
            v.erase(v.begin() + idx);
        }

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] > (1e9 / 2))
                v[i] = 1e18;
            else
                v[i] *= 2;
        }
    }

    cout << coin << endl;;
}

int main() {
    FAST_IO;

    int t;
    cin >> t;
    while (t--) {
        rhafsolve();
    }

    return 0;
}


/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 23:16:27 27/07/2025
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
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
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int cnt=0;
    sort(all(v));
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>m)
        {
            cnt++;
            v.erase(v.begin()+i);
        }
        else
        {
            break;
        }
    }
    for(int i=0;i<v.size();i++)
    {
        v[i]*=2;
        if(v[i]>m)
        {
            cnt++;
            v.erase(v.begin()+i);
        }
        // else
        // {
        //     v[i]*=2;
        // }
    }
    cout<<cnt<<endl;
    
}
int main() {
    FAST_IO;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
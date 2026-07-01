/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:49:27 10/08/2025
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
int maxN=2e5;
    vector<int> a,b;

bool solve(vector<int>& a, vector<int>& b) {
    int n = a.size();
    
    if(n <= 20) 
    {
        for(int mask = 0; mask < (1 << (n-1)); mask++) 
        {
            vector<int> result = a;
            for(int i = 0; i < n-1; i++) 
            {
                if(mask & (1 << i)) 
                {
                    result[i] = result[i] ^ result[i+1];
                }
            }
            if(result == b) 
                return true;
        }
        return false;
    }
    
    vector<int> current = a;
    if(current[n-1] != b[n-1]) return false;
    
    for(int i = n-2; i >= 0; i--) {
        if(current[i] == b[i]) continue;
        else if((current[i] ^ current[i+1]) == b[i]) current[i] = current[i] ^ current[i+1];
        else return false;
    }
    return true;
}

void rhafsolve()
{
    int n;
    cin >> n;
    a.resize(n);
    b.resize(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    
    if(solve(a, b))  yes;
        else no;
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

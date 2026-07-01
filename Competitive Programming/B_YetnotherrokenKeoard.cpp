/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 01:39:45 20/08/2025
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define MESSI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define yes cout << "YES\n"
#define no cout << "NO\n"
bool flag;
void rhafsolve()
{
    string s;
    cin>>s;
    vector<int> caps,noncaps;
    
    for(int i=0;i<s.size();i++)
    {
        
        if(s[i]=='b')
        {
            s[i]=' ';
            if(!noncaps.empty())
            {
                s[noncaps.back()]=' ';
                noncaps.pop_back();
            }
            continue;

        }
        if(s[i]=='B')
        {
            s[i]=' ';
            if(!caps.empty())
            {
                s[caps.back()]=' ';
                caps.pop_back();
            }
            continue;

        }
        if(islower(s[i]) )
        {
            noncaps.pb(i);
        }
        else if(isupper(s[i]) )
        {
            caps.pb(i);
        }

        
    }
    for(auto ch : s)
    {
        if(ch != ' ')
        cout<<ch;
    }
    cout<<endl;
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
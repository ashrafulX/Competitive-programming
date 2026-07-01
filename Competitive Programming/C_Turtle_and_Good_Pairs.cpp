/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 16:33:54 26/11/2025
**/
#include <bits/stdc++.h>
using namespace std;
#define MESSI ios::sync_with_stdio(false); cin.tie(0);
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
    int n;  cin>>n;
    string s;   cin>>s;
    map<char,int> mp;
    for(char c : s) mp[c]++;

    string ans="";
    while(!mp.empty())
    {
        vector<char> er;
        for(auto val : mp)
        {
            ans.push_back(val.first);
            if(val.second==1)
            {
                er.pb(val.first);
            }
            else
            {
                mp[val.first]--;
            }
        }
        for(auto ch : er)
        mp.erase(ch);
    }
    cout<<ans<<endl;
}

//observation
/**
 
 **/
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
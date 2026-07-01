/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 20:58:30 14/11/2025
**/
#include <bits/stdc++.h>
using namespace std;
#define MESSI ios::sync_with_stdio(false); cin.tie(nullptr);
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
    string s;
    cin >> s;
    int n = s.size();

    for (int i = 0; i  < n-1; i++)
    {
        string p = s.substr(i, 2);
        if (p == "><" || p == ">*" || p == "*<" || p == "**")
        {
            cout << -1 << endl;
            return;
        }
    }

    int left = 0;
    while (left < n && s[left] == '<')
        left++;

    int right = 0;
    while (right < n && s[n - 1 - right] == '>')
    {    
        right++;
    }

    int m = n - left - right;
    int ans;

    if (left == n || right == n)
        ans = n;
            else
                ans = max(left + m, right + m);

    cout << ans << endl;
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
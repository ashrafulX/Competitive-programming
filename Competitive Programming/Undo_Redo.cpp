/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:55:05 19/04/2026
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
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
void rhafsolve()
{
    int n;  cin >> n;

    vector<char> done, undone;

    while (n--)
    {
        string op;  cin >> op;

        if (op == "TYPE")
        {
            char x;
            cin >> x;
            done.pb(x);
            undone.clear();
        }
        else if (op == "UNDO")
        {
            if (!done.empty())
            {
                undone.pb(done.back());
                done.pop_back();
            }
        }
        else if (op == "REDO")
        {
            if (!undone.empty())
            {
                done.pb(undone.back());
                undone.pop_back();
            }
        }
    }

    for (auto c : done)
        cout << c;
    cout << nl;
}
//observation
/**
 
 **/
int main() {
    MESSI;

    int t = 1;
    // cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
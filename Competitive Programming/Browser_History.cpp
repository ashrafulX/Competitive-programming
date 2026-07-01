/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 20:02:39 19/04/2026
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
    list<string> lst;
    string s;

    while (cin >> s && s != "end")
    {
        lst.push_back(s);
    }

    int q; cin >> q;

    auto it = lst.begin();

    while (q--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "visit")
        {
            string addr; cin >> addr;

            bool flag = false;
            for (auto i = lst.begin(); i != lst.end(); i++)
            {
                if (*i == addr)
                {
                    it = i;
                    cout << *it << endl;
                    flag = true;
                    break;
                }
            }
            if (!flag)
                cout << "Not Available"<<nl;
        }
        else if (cmd == "next")
        {
            auto temp = it;
            temp++;
            if (temp != lst.end())
            {
                it = temp;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available"<<nl;
            }
        }
        else if (cmd == "prev")
        {
            if (it != lst.begin())
            {
                it--;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available"<<nl;;
            }
        }
    }
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
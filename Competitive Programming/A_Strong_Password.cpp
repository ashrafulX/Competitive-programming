/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 05:35:28 20/08/2025
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
    if(s.size()==1)
    {
        if(s=="a")
        {
            cout<<'w'<<s<<endl;
        }
        else
        {
            cout<<'a'<<s<<endl;
        }
        return;
    }
    flag=false;
    for(int i=s.size()-1;i>=1;i--)
    {
        if(s[i]==s[i-1])
        {
            if(s[i]=='a')
            {
                s.insert(i,"z");
                flag=true;
                break;
            }
            else 
            {
                s.insert(i,"a");
                flag=true;
                break;
            }
            
        }
    }
    if(!flag)
    {
        if(s[0]=='a')
        {
            s.insert(0,"b");
        }
        else 
            s.insert(0,"a");
    }
    cout<<s<<endl;
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
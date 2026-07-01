/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 01:36:29 04/02/2026
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
    int n;  cin>>n;
    string s;   cin>>s;
    set<char> st;
    vector<int> a(n,0), b(n,0);
    for(int i=0;i<n;i++)
    {
        st.insert(s[i]);
        a[i]=st.size();
    }
    st.clear();
    for(int i=n-1;i>=0;i--)
    {
        st.insert(s[i]);
        b[i]=st.size();
    }
    

    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        ans=max(a[i]+b[i+1],ans);
    }
    cout<<ans<<nl;

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
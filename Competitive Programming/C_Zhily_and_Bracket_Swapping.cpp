/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 07:55:35 05/06/2026
**/
#include <bits/stdc++.h>
using namespace std;
#define MESSI ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define int long long
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
    string a,b; cin>>a>>b;
    if(a[0] ==')' || b[0]==')' || a[n-1]=='(' || b[n-1]=='(')
    {
        no;
        return;
    }
    int left=0,right=0;
    bool flag=true;

    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            if(a[i]=='(')
            {
                left++;
                right++;
            }
            else
            {
                left--;right--;
            }
        }
        else
        {
            if(flag)
            {
                left++;
                right--;
            }
            else 
            {
                left--;right++;
            }
            flag=!flag;

        }
        if(left<0 || right <0)
        {
            no;
            return;
        }
    }
    if(left==0 && right==0) yes; else no;

    

}
//observation
/**
() () () ()
(( (( )) ))

(((( ))))

() () () ()



())  (((  ()

())  () (  ()

 **/
signed main() {
    MESSI;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
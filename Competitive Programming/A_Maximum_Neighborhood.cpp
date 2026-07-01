/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 20:36:59 28/11/2025
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
void rhafsolve() {
    ll n; 
    cin >> n;

    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    
    else if(n==2)
    {
        cout<<9<<endl;
        
    }
    else if(n==3)
    {
        cout<<29<<endl;
        
    }
    else if(n==4)
    {
        cout<<56<<endl;
        
    }
    else
    {
       ll mx=n*n-n-1;
    //    cout<<5*mx<<endl;
        cout<<n*n-1+mx+1+mx+mx-1+mx-n<<endl;
    }
    



    
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
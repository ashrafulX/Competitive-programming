// /**
// *   In the name of Allah, the Most Gracious, the Most Merciful.
// *   Author : Ashraful Islam
// *   Time & Date : 05:36:14 05/04/2026
// **/
// #include <bits/stdc++.h>
// using namespace std;
// #define MESSI ios::sync_with_stdio(false); cin.tie(0);
// #define ll long long
// #define pb push_back
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
// #define gcd(a, b) __gcd((a), (b))
// #define nl '\n'
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// void rhafsolve()
// {
//     int n;  cin>>n;
//     vector<int>v(n);
//     for(auto&i:v) cin>>i;

//     int ans=0;
//     int l=0,r=n-1;
//     int left=v[0],right=v[n-1];

//     while(l<r)
//     {
        
        
//         if(left==right)
//         {
//             ans=max(ans,((l+1)+(n-r)));
//         }

//         if(right>left)
//         {
//             l++;
//             left+=v[l];
//         }
//         else 
//         {
//             r--;
//             right+=v[r];
//         }
        
        
//     }
//     cout<<ans<<nl;
// }
// //observation
// /**
 
//  **/
// int main() {
//     MESSI;

//     int t = 1;
//     cin >> t;
//     while (t--) 
//     {
//         rhafsolve();
//     }

//     return 0;
// }

/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 06:11:44 05/04/2026
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
    vector<int> v(n);
    for(auto&i:v) cin>>i;
    vector <int> pre(n),suff(n);

    pre[0]=v[0];

    for(int i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+v[i];
    }

    suff[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--)
    {
        suff[i]=suff[i+1]+v[i];
    }

    int ans=0;
    int l=0,r=n-1;
    while(l<r)
    {
        if(pre[l]==suff[r])
        {
            ans=max(ans,(l+1)+(n-r));
            l++;
            r--;
        }
        else if(pre[l]<suff[r])
        {
            l++;
        }
        else{
            r--;
        }
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
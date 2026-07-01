/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 19:01:56 22/10/2025
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
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    ll sum=0;

    for(auto val : v)
    {
        sum+=abs(val);
    }
    int cnt=0;
    // int seg=0;
    // n=v.size();
    // int l=0,r=0;
    // v.erase(remove(all(v),0),v.end());



    // for(int i=0;i<v.size();i++)
    // {
    //     if(v[i]<0)
    //     {
    //         seg++;
    //     }
    //     else if(v[i]>0)
    //     {
    //         if(seg>0)
    //         {
    //             cnt++;
    //         }
    //         seg=0;
    //     }
    // }
    // if(!v.empty()&&v.back()<0) cnt++;
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        if(v[i]<0 && flag)
        {
            cnt++;
            flag=false;
        }
        else if(v[i]>0)
        {
            flag=true;
        }
    }

    
    cout<<sum<<" "<<cnt<<endl;

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
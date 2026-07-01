/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 05:45:39 17/11/2025
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
    int n,k;    cin>>n>>k;
    vector<int> a(n),b(k);
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<k;i++)    cin>>b[i];
    sort(rall(a));
    sort(all(b));
    int i=0;
    for(;i<k;i++)
    {
        if(b[i] != 1)
        {
            break;
        }
        a[i]=0;
    }
    ll sum=0;
    for(auto val : a) sum+=val;;
    i=0;
    int t=0;
    for(;i<k;i++)
    {
        if(t+b[i]<=n)
        {
            sum-=a[t+b[i]-1];
            t+=b[i];
        }
        else
            break;


        
    }


    cout<<sum<<endl;
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



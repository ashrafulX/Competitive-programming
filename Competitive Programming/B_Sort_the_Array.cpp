/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 03:04:04 03/12/2025
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
#define nline '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void rhafsolve()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    if(is_sorted(all(v)))
    {
        cout<<"yes"<<nline;
        cout<<1<<" "<<1<<nline;
        return;
    }

    if(is_sorted(rall(v)))
    {
        cout<<"yes"<<nline;
        cout<<1<<" "<<n<<nline;
        return;
    }

    int a=-1,b=-1;

    for(int i=0;i<n-1;i++)
    {
        if(v[i]>v[i+1])
        {
            a=i;
            break;
        }
    }

    for(int i=n-1;i>a-1;i--)
    {
        if(v[i]<v[i-1])
        {
            b=i;
            break;
        }
    }

    if(a == -1 || b== -1)
    {
        cout<<"no"<<nline;
        return;
    }
    reverse(v.begin()+a,v.begin()+b+1);
    if(is_sorted(all(v)))
    {
        cout<<"yes"<<nline;
        cout<<++a<<" "<<++b<<nline;
    }
    else cout<<"no"<<nline;
}

//observation
/**
 
2 37 27 4 69
1 2 4 3 5 6

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

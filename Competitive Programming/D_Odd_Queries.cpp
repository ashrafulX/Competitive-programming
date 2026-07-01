/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 01:55:59 14/08/2025
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<int> pre(n,0);
    pre[0]=v[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+v[i];
    }
    ll sum=pre[n-1];
    
    while(k--)
    {

        int a,b,c;
        cin>>a>>b>>c;
        a--;b--;
        ll tmpsum=sum;
        int diff=b-a+1;
        ll addsum=1LL* c*diff;

        ll rmv;

        if(a>0)
            rmv=pre[b]-pre[a-1];
                else 
                    rmv=pre[b];

        tmpsum-=rmv;

        ll totalsum=tmpsum+addsum;

        if(totalsum %2==0) no; else yes;



        
        


        // for (auto val : v) cout<<val<<" ";
        // cout<<endl;
    }
    
    
}
int main() {
    FAST_IO;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}
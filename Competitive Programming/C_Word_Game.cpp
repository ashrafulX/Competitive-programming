/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 03:01:36 22/08/2025
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
    int n;
    cin>>n;
    map<string,int> a,b,c;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0)
            {
                string s;
                cin>>s;
                a[s]++;
            }
            if(i==1)
            {
                string s;
                cin>>s;
                b[s]++;
            }
            if(i==2)
            {
                string s;
                cin>>s;
                c[s]++;
            }
        }
    }

    int agot=0,bgot=0,cgot=0;
    for(auto val : a)
    {
        string check=val.first;
        if(b.count(check) && c.count(check))
        {
            agot+=0;
        }
        else if(b.count(check) || c.count(check))
        {
            agot+=1;
        }
        else
        {
            agot+=3;
        }
    }

    for(auto val : b)
    {
        string check=val.first;
        if(a.count(check) && c.count(check))
        {
            bgot+=0;
        }
        else if(a.count(check) || c.count(check))
        {
            bgot+=1;
        }
        else bgot+=3;
    }
    for(auto val : c)
    {
        string check=val.first;
       if(a.count(check) && b.count(check)) 
       {
        cgot+=0;
       }
       else if(a.count(check) || b.count(check))
       {
        cgot+=1;
       }
       else cgot+=3;
    }
    cout<<agot<<" "<<bgot<<" "<<cgot<<endl;
    
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
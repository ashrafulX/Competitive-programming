#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
ll maxN=1e6+10;
vector<ll> allprimes;
vector<bool> prime(maxN+1,true);
void sieve()
{
    for(int i=2;i<maxN;i++)
    {
        if(prime[i])
        {
            allprimes.push_back(i);
            for(int j=i+i;j<=maxN;j+=i)
            {
                prime[j]=false;
            }
        }
    }
}
int main() {
    FAST_IO;
    sieve();
    int n;
    cin>>n;
    vector<int> factor;
    int idx=0;\
    while(n>1)
    {
        while(true)
        {
            if(n%allprimes[idx] != 0)
            {
                break;
            }
            factor.push_back(allprimes[idx]);
            n=n/allprimes[idx];
        }
        idx++;
    }
    for(auto val : factor)
        cout<<val<<" ";
    cout<<endl;


   return 0;
}

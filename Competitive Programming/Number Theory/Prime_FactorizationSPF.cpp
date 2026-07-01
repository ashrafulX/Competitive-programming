#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    FAST_IO;

    int n;
    cin>>n;
    vector<int> factor;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            factor.push_back(i);
            n=n/i;
        }
    }
    if(n>1)
        factor.push_back(n);

    for(auto val : factor)
        cout<<val<<" ";
    cout<<endl;

   return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
const int maxN=1e6+9;
int main() {
    FAST_IO;
vector<int> divisors(maxN);
for(int i=1;i<maxN;i++)
{
    for(int j=i;j<maxN;j+=i)
    {
        divisors[j]++;
    }
}
int t=1;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    cout<<divisors[n]<<endl;
}

   return 0;
}


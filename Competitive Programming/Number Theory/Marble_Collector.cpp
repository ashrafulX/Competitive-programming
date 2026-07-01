#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    FAST_IO;

int t=1;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    set<int> st;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        st.insert(v[i]);
    }
    cout<<m-st.size()<<endl;
  
}
   return 0;
}

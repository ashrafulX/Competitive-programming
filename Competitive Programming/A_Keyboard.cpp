#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    FAST_IO;

int t=1;
// cin>>t;
while(t--)
{
    char a;
    cin>>a;
    string s;
    cin>>s;
    string key="qwertyuiopasdfghjkl;zxcvbnm,./";
    for(int i=0;i<s.size();i++)
    {
        int idx=key.find(s[i]);
        if(a=='R')
        {
            s[i]=key[idx-1];
        }
        else
        {
            s[i]=key[idx+1];
        }
    }
    cout<<s<<endl;
}

   return 0;
}

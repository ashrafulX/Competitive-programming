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
    int n;
    string s;
    cin>>n>>s;
    int lescnt=0;
    string les ;
    int grtcnt=0;
    string grt;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '<')
        {
            les = s.substr(i);
        }
        int val=les.size();
        lescnt=max(lescnt,val);
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '>')
        {
            grt = s.substr(i);
        }
        int val=grt.size();
        grtcnt=max(grtcnt,val);
    }
    cout<<max(lescnt,grtcnt) +1<<endl;
}

   return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    sort(s.begin(),s.end());

    set<char> solve;

    for(char a : s)
    {
        solve.insert(a);
    }

    for(char a : solve)
    {
        cout<<a;
    }
  
    return 0;
}
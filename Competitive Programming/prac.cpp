#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="pwwkew";


    vector<int>v(26,0);
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        char a=s[i];
        int idx=a-'a';
        v[idx]++;
        cnt++;
        if(v[idx]>1)
        {
            cnt--;
            idx--;
        }
    }
    cout<<cnt<<endl;

}
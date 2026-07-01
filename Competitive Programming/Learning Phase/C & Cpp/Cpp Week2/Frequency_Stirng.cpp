#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[35];
    cin>>ch;
    int fre[26]={0};
    for(int i=0;i<strlen(ch);i++)
    {
        int val=ch[i]-'a';
        fre[val]++;
    }
    for(int i=0;i<26;i++)
    {
        if(fre[i] != 0)
        {
        cout<<(char)(i+'a') <<"--"<<fre[i]<<endl;
        }
    }

    return 0;
}
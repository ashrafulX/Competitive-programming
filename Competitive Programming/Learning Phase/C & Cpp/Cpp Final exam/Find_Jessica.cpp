#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    stringstream ss(a);
    string word;
    int cnt=0;
    while(ss>>word)
    {
        if(word=="Jessica")
        {
            cnt=1;
            break;
        }
        else
        {
            cnt=0;
        }
    }
    // int cnt=0;
    // for(int i=0;i<a.size();i++)
    // {
    //     if(a[i]='J' && a[i+1]=='e' && a[i+2]=='s' && a[i+3]=='s' && a[i+4]=='i' && a[i+5]=='c' && a[i+6]=='a')
    //     {
    //         cnt=1;
    //         break;
    //     }
    // }
    if(cnt==1)
    {
        cout<<"YES"<<endl;
    } 
    else if(cnt==0)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
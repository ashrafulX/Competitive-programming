#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int e=0,g=0,y=0,p=0,t=0;
    // for(int i=0;i<s.size();i++)
    // {
    //     if(s[i]=='e' || s[i]=='E')
    //     {
    //         e++;
    //     }
    //     else if(s[i]=='g' || s[i]=='G')
    //     {
    //         g++;
    //     }
    //     else if(s[i]=='y' || s[i]=='Y')
    //     {
    //         y++;
    //     }
    //     else if(s[i]=='p' || s[i]=='P')
    //     {
    //         p++;
    //     }
    //     else if(s[i]=='t' || s[i]=='T')
    //     {
    //         t++;
    //     }
    // }
    for(char c:s)
    {
        if(c=='e' || c=='E') e++;
        if(c=='g' || c=='G') g++;
        if(c=='y' || c=='Y') y++;
        if(c=='p' || c=='P') p++;
        if(c=='y' || c=='T') t++;
    }
    cout<<min({e,g,p,y,t})<<endl;
    return 0;
}
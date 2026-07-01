#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='E' && a[i+1]=='G' && a[i+2]=='Y' && a[i+3]=='P' && a[i+4]=='T')
        {
            i+=4;
            cout<<" ";
        }
        else 
        {
            cout<<a[i];
        }
    }
    
    return 0;
}
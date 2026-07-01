#include<bits/stdc++.h>
using namespace std;
int main()
{  
    char a;
    cin>>a;
    if(a>='A' && a<='Z')
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
    }
    if(a>='0' && a<='9')
    {
        cout<<"IS DIGIT"<<endl;
    }
    if(a>='a' && a<='z')
    {
        cout<<"ALPHA"<<endl<<"IS SMALL"<<endl;
    }
    return 0;
}
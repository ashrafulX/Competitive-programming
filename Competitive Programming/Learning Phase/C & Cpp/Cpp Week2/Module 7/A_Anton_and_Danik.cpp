#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int ac=0;
    int bc=0;
    while(t--)
    {
        string a;
        cin>>a;
        
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='A')
            {
                ac++;
            }
            else if(a[i]=='D')
            {
                bc++;
            }
        }
    }
    if(ac>bc)
    {
        cout<<"Anton"<<endl;

    }
    else if(bc>ac)
    {
        cout<<"Danik"<<endl;
    }
    else if(ac==bc)
    {
        cout<<"Friendship"<<endl;
    }

    return 0;
}
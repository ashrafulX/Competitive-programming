#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[10001];
        char b[10001];
        cin>>a>>b;
        int i=0,j=0;
        while(a[i] !='\0' && b[i] != '\0')
        {
            cout<<a[i]<<b[i];
            i++;
            j++;
        }
        while(a[i] != '\0')
        {
            cout<<a[i];
            i++;
            j++;
        }
        while(b[i] != '\0')
        {
            cout<<b[i];
            i++;
            j++;
        }
        cout<<endl;
    }
    return 0;
}
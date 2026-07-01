#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int a,b;
    cin>>a>>b;
    cout<<min(a,b);
    cout<<max(a,b);
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
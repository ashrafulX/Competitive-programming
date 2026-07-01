#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    for(int i=0;i<10;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<10;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
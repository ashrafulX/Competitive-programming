#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="Hi There";
    // cout<<*(a.begin())<<endl;
    // cout<<*(a.end()-1)<<endl;
    for(auto it=a.begin();it<a.end();it++)
    {
        cout<< * it<<" ";
    }
    return 0;
}
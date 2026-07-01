#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int> a, pair<string,int> b)
    {
        if(a.first == b.first)
            return a.second > b.second;
        
        return a.first <b.first;
    }
int main()
{
    int n;
    cin>>n;
    vector<pair<string,int>>p(n);
    for(int i=0;i<n;i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    
    sort(p.begin(),p.end(),cmp);
    for(int i=0;i<n;i++)
    {
        cout<<p[i].first<<" "<<p[i].second;
        cout<<endl;
    }

    return 0;
}
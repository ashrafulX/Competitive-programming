#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v(10,99);
    // vector<int> v2=v; //v assign in v2
    // // v2=v;
    // for(int i=0;i<v2.size();i++)
    // {
    //     cout<<v2[i]<<" ";
    // }
    // cout<<endl;
    // cout<<v.size()<<endl; 
    // cout<<v2.size()<<endl;

    // vector<int> a={9,8,7,6,5,4,3,2,1};
    // a.push_back(99);
    // sort(a.begin(),a.end()+1);
    // for(int i=0;i<a.size();i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // a.pop_back();
    // a.pop_back();
    // a.pop_back();
    // a.pop_back();
    // for(int i=0;i<a.size();i++)
    // {
    //     cout<<a[i]<<" ";
    // }

    vector <int> v={1,2,4,5,6};
    v.insert(v.begin()+2,3);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // v.erase(v.begin());
    v.erase(v.begin()+1,v.end()-1);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
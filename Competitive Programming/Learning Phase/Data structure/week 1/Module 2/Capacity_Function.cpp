#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a={1,2,3,4,5,9,10};
    cout<<a.capacity()<<endl;
    cout<<a.size()<<endl; //O(N)
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    a.clear();
    cout<<a.size()<<endl;
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<" "<<a[5]<<" "<<a[6]<<endl;
    if(a.empty())
    {
        cout<<"kheali";
    }
    else 
    {
        cout<<"khali na";
    }
    cout<<endl;
    a.resize(20,99);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
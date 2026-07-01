#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="Ashraful Islam";
    cout<<a[0]<<endl;
    cout<<a.at(0)<<endl;
    
    // Last element 
    cout<<"Last Element"<<endl;
    cout<<a[a.size()-1]<<endl;
    cout<<a.back()<<endl;

    // first element
    cout<<"First Element"<<endl;
    cout<<a[0]<<endl;
    cout<<a.front()<<endl;
    return 0;
}
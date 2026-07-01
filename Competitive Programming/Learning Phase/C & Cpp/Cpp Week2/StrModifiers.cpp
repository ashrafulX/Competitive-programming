#include<bits/stdc++.h>
using namespace std;
int main()
{   // concation
    string a="Hello ";
    string b="World";
    // a=a+b;
    // a+=b;
    //or
    a.append(b); //same as a=a+b
    cout<<a<<endl;

    // After Last index push
    a.push_back('A');
    cout<<a<<endl;

    //Last index remove
    a.pop_back();
    cout<<a<<endl;


    return 0;
}
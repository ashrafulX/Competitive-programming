#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="Hello";
    cout<<a<<endl;
    // Assign
    a="World";
    cout<<a<<endl;

    //earse
    string b="HI There";
    b.erase(2,1); //1 koyta index delete korbo
    //2 kon index e delete korbo
    cout<<b<<endl;

    //Replace
    string c="Hello World";
    c.replace(6,1,"HIHI "); //6 kon index theke, 1 koyta delete korbe, 0 dile kono delete korbe na
    cout<<c<<endl;

    //Insert
    string d="Hello World";
    d.insert(6,"Ashraful ");
    cout<<d<<endl;

    return 0;
}
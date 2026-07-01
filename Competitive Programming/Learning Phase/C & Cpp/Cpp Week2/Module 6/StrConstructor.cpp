#include<bits/stdc++.h>
using namespace std;
int main()
{
    // 1 way
    string a="A - Hello World!";
    cout<<a<<endl;

    //2nd way
    string b("B - Hello World");
    cout<<b<<endl;

    //3rd way
    int n=10;
    string c("C - Hello Wordl!",n); //first koto charcter
    cout<<c<<endl;

    //4th way
    string d("D - Hello World!");
    string i(d,4);
    cout<<i<<endl;

    //5th way
    //same charcter or word oneeek bar dorkar hoile
    string j(26,'A');
    cout<<j<<endl;
    return 0;
}
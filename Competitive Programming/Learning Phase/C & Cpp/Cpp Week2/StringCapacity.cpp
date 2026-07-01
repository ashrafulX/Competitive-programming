#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    // cin>>a;
    // int b=a.size(); //string lenght calculate
    // cout<<b<<endl;

    // cout<<a.max_size()<<endl; //max koto size nite parbe

    // capacity
    // string x;
    // x="kladjf;laskdjf;alskdjf;alksjdf";
    // cout<<x.capacity()<<endl;

    // string clear
    // string n="Ashraful";
    // cout<<n<<endl;
    // n.clear();
    // cout<<n<<endl;
    // cout<<n.size()<<endl;

    // empty
    // string k;
    // k="sonamoni";
    // if(k.empty()==true) //string হলে true রিটার্ন করবে। খালি না হলে false.
    // {
    //     cout<<"EMPTY STRING"<<endl;
    // }
    // else if(k.empty()==false)
    // {
    //     cout<<"NOT EMPTY STRING"<<endl;
    // }

    //resize
    string b;
    cin>>b;
    cout<<b<<endl;
    b.resize(15,'a'); //resize kore baki kore a bose jabe
    cout<<b<<endl;

    return 0;
}
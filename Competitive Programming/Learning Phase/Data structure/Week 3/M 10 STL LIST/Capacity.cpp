#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>Mylist={1,2,3,4,5};
    cout<<Mylist.size()<<endl;
    Mylist.clear();
    if(Mylist.empty())
    {
        cout<<"LIST KHALI";
    }
    else{
        cout<<"KHALI NA";
    }
    cout<<endl;
    Mylist.resize(40,100); //next vale initial with 100
    Mylist.resize(100); //size bariye shob value 0 kore dibe
    cout<<Mylist.size(); 
    return 0;
}
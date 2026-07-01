
#include<bits/stdc++.h>
using namespace std;
void print(stringstream& ss)
{
    string word;
    if(ss>>word)
    {
        print(ss);
        cout<<word<<" ";
    }
}
int main()
{
    string a;
    getline(cin,a);
    stringstream ss(a);
    print(ss);
    return 0;
}
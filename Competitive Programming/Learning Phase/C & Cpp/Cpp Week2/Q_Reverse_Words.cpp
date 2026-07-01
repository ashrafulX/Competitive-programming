#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    stringstream b(a);
    string word;
    while(b>>word)
    {
        reverse(word.begin(),word.end());
        cout<<word<<" ";
    }
    return 0;
}
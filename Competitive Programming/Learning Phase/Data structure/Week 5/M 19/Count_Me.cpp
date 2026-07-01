#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        string word;
        map<string,int> mapcount;
        string maxword;
        int count=0;
        while(ss>>word)
        {
            mapcount[word]++;
            if(mapcount[word]>count || (mapcount[word]== count && maxword.empty()))
            {
                maxword=word;
                count=mapcount[word];
            }
        }
        cout<<maxword<<" "<<count<<endl;
    }
    return 0;
}
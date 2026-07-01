#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++) //O(n)
    {
        for(int i=0;i<n;i++) //o(n)
        {
            cout<<"Hello"<<endl;
        }
        //so, O(n*n) == O(n^n)
    }
    return 0;
}
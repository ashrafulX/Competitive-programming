#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout<<v.size()<<endl;


    vector<int> a(10); //10 sieze vector intialized
    cout<<a.size()<<endl;


    vector<int> b(10,99); //10 size vector declared & every value 99
    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }

    cout<<endl;


    vector<int> c(b); //() er bitor arekta vector er name dile
                    // sei vector ta notun vector e copy hoye jabe.
    for(int i=0;i<c.size();i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;


    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    vector <int> arrcpy(arr,arr+10); 
    // arry er value ke vector er modde copy kore rakhar jonno 
    for(int i=0;i<arrcpy.size();i++)
    {
        cout<<arrcpy[i]<<" ";
    }

    return 0;
}
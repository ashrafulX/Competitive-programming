#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int id;
    int cls;
    
};
int main()
{
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        getline(cin,a[i].name);
        cin>>a[i].id>>a[i].cls;
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<a[i].id<<a[i].cls;
        cout<<endl;
    }
    return 0;
}
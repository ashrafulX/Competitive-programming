#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[50];
    long long id;
    double cgpa;
};
int main()
{   
    Student a,b,c;
    
    cin>>a.name>>a.id>>a.cgpa;
    cin>>b.name>>b.id>>b.cgpa;
    cin>>c.name>>c.id>>c.cgpa;


    cout<<a.name<<endl<<a.id<<endl<<a.cgpa<<endl;
    cout<<b.name<<endl<<b.id<<endl<<b.cgpa<<endl;
    cout<<c.name<<endl<<c.id<<endl<<c.cgpa<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    // char name[100];
    int id;
    int cls;
    
    Student(int id,int cls)
    {
        // cout<<id<<" "<<cls;
        this->id=id;
        this->cls=cls;
    }
};
int main()
{   
    Student a(1,4);
    Student b(2,3);
    cout<<a.id<<a.cls<<endl;
    cout<<b.id<<b.cls<<endl;
    
    return 0;
}
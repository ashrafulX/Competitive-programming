#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int id;
    int cls;
    double gpa;
    Student(string name ,int id,int cls,double gpa)
    {
        this->name=name;
        this->id=id;
        this->cls=cls;
        this->gpa=gpa;
    }

};
Student fun()
{
    string name;
    int id,cls;
    double gpa;
    // cin.ignore();
    getline(cin,name);
    cin>>id>>cls>>gpa;
    Student a(name,id,cls,gpa);
    return a;
}
//return a dynamic object
Student* dynamicFun()
{
    string name;
    int id,cls; //name id cls gpa
    double gpa;
    // cin.ignore();
    getline(cin,name);
    cin>>id>>cls>>gpa;
    Student *p= new Student(name,id,cls,gpa);
    return p;
}
int main()
{
    Student a=fun();
    Student *b=dynamicFun();
    Student *c=new Student("Ashraful Islam",781,10,4.55);
    cout<<a.name<<endl<<a.id<<endl<<a.cls<<endl<<a.gpa<<endl;
    cout<<b->name<<endl<<b->id<<endl<<b->cls<<endl<<b->gpa<<endl;
    cout<<c->name<<" "<<c->id<<" "<<c->cls<<" "<<c->gpa<<endl;
    return 0;
}
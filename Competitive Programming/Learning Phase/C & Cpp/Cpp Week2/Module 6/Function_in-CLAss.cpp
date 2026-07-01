#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int id;
    int roll;
    double gpa;

    Student(string name, int id,int roll,double gpa)
    {
        this->name=name;
        this->id=id;
        this->roll=roll;
        this->gpa=gpa;
    }
    void print()
    {
        // cout<<name<<" "<<id<<" "<<roll<<" "<<gpa<<endl;
        cout<<"Student Name = "<<name<<endl;
        cout<<"Id = "<<id<<endl;
        cout<<"Roll = "<<roll<<endl;
        cout<<"Cgpa = "<<gpa<<endl;
    }

};
int main()
{
    Student a("Ashraful islam",781,1,3.33);
    Student b("Bellal Kazi",666,2,3.40);
    Student c("Sinha",69,96,3.69);
    a.print();
    b.print();
    c.print();


    return 0;
}
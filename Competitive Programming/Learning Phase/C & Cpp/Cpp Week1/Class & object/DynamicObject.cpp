#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id;
    int cls;
    Student(int id,int cls)
    {
        this->id=id;
        this->cls=cls;
    }
};
Student * fun()
{
    Student *p=new Student(781,10);
    return p;
}
int main()
{
    Student *rcv=fun();
    cout<<rcv->id<<"  "<<rcv->cls<<endl;
    
    return 0;
}

//Retrun object with pointer
// #include<bits/stdc++.h>
// using namespace std;
// class Student{
//     public:
//     int id;
//     int cls;
//     Student(int id,int cls)
//     {
//         this->id=id;
//         this->cls=cls;
//     }
// };
// Student* fun()
// {
//     Student * ashraf= new Student(781,14);
//     return ashraf;

// }
// int main()
// {
//     Student *rcv=fun();
//     cout<<rcv->id<<" "<<rcv->cls<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class Student{
//     public:
//     int id;
//     int cls;
//     Student(int id,int cls)
//     {
//         this->id=id;
//         this->cls=cls;
//     }
// };
// int main()
// {
//     Student * ashraf = new Student(181,12);
//     cout<<ashraf->id<<" "<<ashraf->cls;
//     return 0;
// }
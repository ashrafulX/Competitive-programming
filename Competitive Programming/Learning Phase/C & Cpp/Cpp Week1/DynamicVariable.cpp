#include<bits/stdc++.h>
using namespace std;
int *p;
void fun()
{
    int *x = new int;
    *x=10000;
    p=x;
    cout<< "fun" << *p;

}
int main()
{   
    fun();
    cout<<"main" << *p;
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int *p;
// void fun()
// {
//     int x=10;
//     p=&x;
//     cout<< *p<<endl;
// }
// int main()
// {   
//     fun();
//     cout<<*p;
//     return 0;
// }
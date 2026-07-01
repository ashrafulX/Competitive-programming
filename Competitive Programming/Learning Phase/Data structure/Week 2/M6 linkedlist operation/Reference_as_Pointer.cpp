#include<bits/stdc++.h>
using namespace std;
void fun(int* &p)
{
    p=NULL;

}
int main()
{
    int a=10;
    int *p=&a;
    cout<<*p<<endl;
    fun(p);
    cout<<p<<endl;
    return 0;
}
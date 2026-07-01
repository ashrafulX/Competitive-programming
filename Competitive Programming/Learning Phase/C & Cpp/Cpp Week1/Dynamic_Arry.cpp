#include<bits/stdc++.h>
using namespace std;
int* fun()
{
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    return a;
}
int main()
{   
    int *p=fun();
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<" ";
    }
    return 0;
}



// arry retrun from main
// #include<bits/stdc++.h>
// using namespace std;
// void fun(int a[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
// }
// int main()
// {   
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     fun(a,n);
//     return 0;
// }
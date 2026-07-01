#include<stdio.h>
void fun(int b[],int n)
{
    b[3]=100;
}
int main()
{
    int a[5]={1,2,3,4,5};
    fun(a,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}
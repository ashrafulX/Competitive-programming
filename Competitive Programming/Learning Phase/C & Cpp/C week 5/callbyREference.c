#include<stdio.h>
void fun(int *p)
{
    printf("fun er p %p",p);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(&n);
    printf("\nmain er p %p",&n);
}
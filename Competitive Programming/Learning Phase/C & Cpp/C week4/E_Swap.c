#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int *aa=&a;
    int *bb=&b;
    int temp= *aa;
    *aa=*bb;
    *bb=temp;
    printf("%d %d",a,b);   
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int *aa=&a, *bb=&b;
    int res= *aa + *bb;
    printf("%d",res);   
    return 0;
}
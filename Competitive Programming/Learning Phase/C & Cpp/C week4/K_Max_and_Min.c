#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int *aa=&a;
    int *bb=&b;
    int *cc=&c;
    if (*aa<=*bb && *aa<=*cc)
    {
        printf("%d ",*aa);
    }
    else if(*bb<=*aa && *bb<=*cc)
    {
        printf("%d ",*bb);
    }
    else 
    {
        printf("%d ",*cc);
    }
 
    if (*aa>=*bb && *aa>=*cc)
    {
        printf("%d",*aa);
    }
    else if(*bb>=*aa && *bb>=*cc)
    {
        printf("%d",*bb);
    }
    else 
    {
        printf("%d",*cc);
    }
    return 0;
}
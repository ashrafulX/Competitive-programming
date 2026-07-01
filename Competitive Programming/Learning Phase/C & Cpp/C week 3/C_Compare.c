#include<stdio.h>
#include<string.h>
int main()
{
    char a[21];
    char b[21];
    scanf("%s",a);   
    scanf("%s",b);
     int v=strcmp(a,b);
     if(v<=0)
     {
        printf("%s",a);
     }   
     else if(v>=0)
     {
        printf("%s",b);
     }
    return 0;
}
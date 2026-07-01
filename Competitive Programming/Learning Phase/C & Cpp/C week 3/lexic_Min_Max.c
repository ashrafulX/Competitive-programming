#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    char b[1001];
    char c[1001];
    scanf("%s",a);   
    scanf("%s",b);   
    scanf("%s",c);
    int t1= strcmp(a,b);
    int t2=strcmp(a,c);
    int t3=strcmp(b,c);
    if(t1<0 && t2<0)
    {
        printf("%s\n",a);
    }
    else if(t3<0 && t3<0)
    {
        printf("%s\n",b);
    }
    else
    {
        printf("%s\n",c);
    }
    
    if(t1>0 && t2>0)
    {
        printf("%s\n",a);
    }
    else if(t3>0 && t3>0)
    {
        printf("%s\n",b);
    }
    else
    {
        printf("%s\n",c);
    }
    
    return 0;
}
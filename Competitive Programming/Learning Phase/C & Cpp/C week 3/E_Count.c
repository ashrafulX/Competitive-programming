#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000000];
    scanf("%s",a); 
    int len=strlen(a);
    int sum=0;
    for(int i=0;i<len;i++)
    {
        int digit=a[i]-'0';
        sum=sum+digit;

    } 
    printf("%d",sum); 
    return 0;
}
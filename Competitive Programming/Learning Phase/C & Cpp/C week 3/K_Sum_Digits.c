#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char ch[n];
    scanf("%s",ch);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int digit=ch[i]-'0';
        sum=sum+digit;
    }
    printf("%d",sum);
}
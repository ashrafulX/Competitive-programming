#include<stdio.h>
#include<string.h>
int main()
{
    char ch[101];
    scanf("%s",&ch);
    int len;
    len=strlen(ch);
    int sum=0;
    for(int i=0;i<len;i++)
    {
        int digit= ch[i]-'0';
        printf("%d ",digit);
        
    }

    
}
#include<stdio.h>
int main()
{
    char a[10001];
    scanf("%s",a);
    int len=strlen(a);
    int b[26]={0};
    for(int i=0;i<len;i++)
    {
        a[i]-'0';
    }
    for(int i=0;i<26;i++)
    {
        b[a[i]]++;
    }
    for(int i=0;i<26;i++)
    {
        printf("%c")
    }

}
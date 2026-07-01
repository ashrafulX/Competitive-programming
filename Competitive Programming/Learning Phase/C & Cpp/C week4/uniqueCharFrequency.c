#include<stdio.h>
#include<string.h>
int main()
{
    char str[10]="apple";
    int len=strlen(str);
    int a[26]={0};
    for(int i=0;i<len;i++)
    {
        char ch=str[i];
        int index=ch-'a';
        a[index]=1;
    }
    
    for(int i=0;i<26;i++)
    {
        printf("%c - %d\n",i+'a',a[i]);
    }

    return 0;
}
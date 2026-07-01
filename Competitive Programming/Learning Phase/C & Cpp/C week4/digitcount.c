#include<stdio.h>
#include<string.h>
int main()
{
    char ch[101];
    scanf("%s",ch);
    int len=strlen(ch);
    int a[100000];
    for(int i=0;i<len;i++)
    {
        a[ch[i]-'a']=1;
    }

    for(int i=0;i<len;i++)
    {
        printf("%c ",a[i]-'a');
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    char  ch[101];
    scanf("%s",ch);
    char b[101];
    int len=strlen(ch);
    for(int i=0;i<len;i++ )
    {
        b[i]=ch[i];
    }
    b[len]='\0';
    printf("B arry %s",b);
    return 0;
    // strcpy(b,ch);
    printf("%s",b);
}
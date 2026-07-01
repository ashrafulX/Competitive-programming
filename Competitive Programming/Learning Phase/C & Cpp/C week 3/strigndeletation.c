#include<stdio.h>
#include<string.h>
int main()
{
    char ch[101];
    scanf("%s",ch);
    int len=strlen(ch);
    int index;
    scanf("%d",&index);
    for(int i=index;i<len;i++)
    {
        ch[i]=ch[i+1];
    }
    // ch[len]='\0';
    // for(int i=0;i<len;i++)
    // {
    
    // } 
    printf("%s",ch);
    return 0;
}
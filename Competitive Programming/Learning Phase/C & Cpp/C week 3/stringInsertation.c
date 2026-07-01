#include<stdio.h>
#include<string.h>
int main()
{
    char ch[101];
    scanf("%s",ch);
    int len=strlen(ch);
    int index;
    scanf("%d",&index);
    char value;
    getchar();
    scanf("%c",&value);
    len++;
    for(int i=len;i>=index;i--)
    {
        ch[i+1]=ch[i];
    }
    ch[index]=value;
    // ch[len+1]='\0';
    printf("%s",ch);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100001];
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]==',')
        {
            str[i]=' ';
        }
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        else if (str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    printf("%s",str);
}
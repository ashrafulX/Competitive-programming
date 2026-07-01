#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100001];
    scanf("%s",ch);
    int len=strlen(ch);
    int a[26]={0};
    for(int i=0;i<len;i++)
    {
        int value=ch[i]-'a';
        a[value]++;
    }   
    for(int i=0;i<26;i++)
    {
        if(a[i]>0)
        {
            printf("%c : %lld\n",i+'a',a[i]);
        }
    }
    return 0;
}
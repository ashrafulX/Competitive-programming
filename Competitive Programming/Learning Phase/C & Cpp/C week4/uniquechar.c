#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    char ch[100001];
    scanf("%s",&ch);
    int len=strlen(ch);
    int a[26]={0};
    for(int i=0;i<len;i++)
    {
        int val= ch[i] - 'a';
        a[val]=1;
    }   
    for(int i=0;i<26;i++)
    {
        if(a[i]==1)
        {
            int c=i+'a';
            printf("%c",c);
        }
    }

    return 0;
}
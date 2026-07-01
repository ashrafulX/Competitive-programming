#include<stdio.h>
#include<string.h>
int main()
{
    int n=101;
    char a[n];
    char b[n];
    char c[n];
    scanf("%s %s %s",a,b,c);
    int cnt=0;
    int len=strlen(a);
    for(int i=0;i<len;i++)
    {
        if(a[i]!= b[i])
        {
            b[i]=a[i];
            cnt++;
        }
        if(a[i] != c[i])
        {
            c[i]=a[i];
            cnt++;
        }
    }
    printf("%d",cnt);
    
}
// printf("%s",b);
    // printf("%s",c);
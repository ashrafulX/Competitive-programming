#include<stdio.h>
#include<string.h>
int main()
{
    char a[201];
    char b[101];
    scanf("%s",a);
    scanf("%s",b);
    // strcat(a,b);
    int alen=strlen(a);
    int blen=strlen(b);
    
    for(int i=0;i<2;i++)
    {
        a[alen+i]=b[i];
    }
    a[blen+2]='\0';
    printf("%s",a);
    return 0;
}
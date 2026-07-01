#include<stdio.h>
#include<string.h>
int fun(char a[],int i)
{
    if(a[i]=='\0')
    {
        return 0;
    }
    int l= fun(a,i+1);
    return l+1;
}

int main()
{
    char a[101];
    scanf("%s",a);
    printf("%d", fun(a,0));
    return 0;
}
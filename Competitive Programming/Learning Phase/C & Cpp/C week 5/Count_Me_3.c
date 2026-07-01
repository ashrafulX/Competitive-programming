#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char a[10001];
        scanf("%s",a);
        int len=strlen(a);
        int caps=0, small=0, digit=0;
        for(int i=0;i<len;i++)
        {
            if(a[i]>='A' && a[i]<='Z')
            {
                caps++;
            }
            if(a[i]>='a' && a[i]<='z')
            {
                small++;
            }
            if(a[i]>='0' && a[i]<='9')
            {
                digit++;
            }
        }
    printf("%d %d %d",caps,small,digit);
    printf("\n");
    }
}
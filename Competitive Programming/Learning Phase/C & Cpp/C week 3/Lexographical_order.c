#include<stdio.h>
#include<string.h>
int main()
{
     char a[101];
     char b[101];
     scanf("%s",a);  
     scanf("%s",b);
     int i=0;
    while(1)
    {
        if(a[i]=='\0' && b[i]=='\0')
        {
            printf("same");
            break;
        }
        else if(a[i] =='\0')
        {
            printf("a small");
            break;
        }
        else if(b[i] =='\0')
        {
            printf("b small");
            break;
        }
        if(a[i]==b[i])
        {
            i++;
            // continue;

        }
        else if(a[i]<b[i])
        {
            printf("a small");
            break;
        }
        else if(a[i]>b[i])
        {
            printf("b small");
            break;
        }
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    scanf("%s",a);
    int len=strlen(a);
    int i=0, j=len-1;
    while(i<j)
    {
        char temp= a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    } 
    // strrev(a);
    printf("%s",a);  
    return 0;
}
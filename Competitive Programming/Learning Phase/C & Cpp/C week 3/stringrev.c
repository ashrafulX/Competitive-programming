#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    // scanf("%s",a);
    fgets(a,sizeof(a),stdin);
    int len=strlen(a);
    int i=0,j=len-1;
    while(i<j)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }  
    
    printf("%s",a);
    return 0;
}
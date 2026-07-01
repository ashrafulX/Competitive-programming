#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    int a;
    int b;
    scanf("%d",&n);
    scanf("%d",&a);
    scanf("%d",&b);
    int c[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }  
    int count=0; 

    scanf("%d %d",&a,&b);
    for(int i=0;i<n;i++)
    {
        if(c[i]>=a && c[i]<=b)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
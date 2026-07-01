#include<stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("A arry ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("B arry ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}
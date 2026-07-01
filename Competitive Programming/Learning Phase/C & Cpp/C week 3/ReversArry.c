#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n/2;i++)
    {
    for(int j=n-1-i;j>i;j--)
    {
       int temp=a[i];
       a[i]=a[j];
       a[j]=temp;
       break;
    }

    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
}

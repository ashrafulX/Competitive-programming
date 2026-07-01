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
    int i=0;
    int k=n;
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(i<j)
            {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }  
        }

    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
   
}
#include<stdio.h>
#include<string.h>
int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    int k=0;
    for(int i=0;i<n;i++)
    {
        sum=a[i]+sum;
        if(sum<=t)
        {
            k++;
        }
        
    }
    printf("%d",k);

    return 0;
}
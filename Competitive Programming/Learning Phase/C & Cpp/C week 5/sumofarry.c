
#include<stdio.h>
void fun(int b[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=b[i];
    }
    printf("%d",sum);
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    fun(a,n);
}

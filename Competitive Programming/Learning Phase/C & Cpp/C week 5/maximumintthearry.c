#include<stdio.h>
int a[100001];
int solve(int index,int n)
{
    if(index==n-1)
    {
        return a[index];
    }
    int rmax=solve(index+1,n);
    if(rmax>a[index])
    {
        return rmax;
    }
    else{
        return a[index];
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int find=solve(0,n);
    printf("%d",find);
}
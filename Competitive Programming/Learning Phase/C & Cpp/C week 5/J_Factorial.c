#include<stdio.h>
long long int fun(int n)
{
    if(n==0)
    {
        return 1;
    }
    long long ans= fun(n-1);
    return ans*n;
}
int main()
{
    int n;
    scanf("%d",&n);
    long long cnt=fun(n);
    printf("%lld",cnt);
}
#include<stdio.h>
long long int solve(int n)
{
    if(n==0)
    {
        return 1 ;
    }
     int sum=n * solve(n-1);
     return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    // int a=solve(n);
    printf("%lld",solve(n));
}
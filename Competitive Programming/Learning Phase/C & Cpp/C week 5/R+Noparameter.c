#include<stdio.h>
int solve()
{
    int a,b;
    scanf("%d%d",&a,&b);
    return a+b;
}
int main()
{
    int rcv=solve();
    printf("%d",rcv);
    return 0;
}
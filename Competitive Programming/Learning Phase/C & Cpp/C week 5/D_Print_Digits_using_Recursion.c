#include<stdio.h>
void solve(int n)
{
    if(n==0)
    {
        return;
    }
    int digit=n%10;
    solve(n/10);
    printf("%d ",digit);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n==0)
        {
            printf("0");
        }
        solve(n);
        printf("\n");
    }
}
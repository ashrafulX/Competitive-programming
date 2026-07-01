#include<stdio.h>
void solve(int a,int b)
{   
    if(a==b)
    {
    printf("%d ",a);
    return;
    }
    printf("%d ",a);
    solve(a-1,b);
}
int main()
{
    int n;
    scanf("%d",&n);
    solve(n,1);
    return 0;
}
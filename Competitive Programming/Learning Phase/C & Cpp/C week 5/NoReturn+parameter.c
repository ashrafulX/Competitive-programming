#include<stdio.h>
void solve(int x, int y)
{
    int sum= x+y;
    printf("%d",sum);
}
int main()
{   
    int a,b;
    scanf("%d %d",&a,&b);
    solve(a,b);
       
    return 0;
}
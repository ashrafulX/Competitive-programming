#include<stdio.h>
void fun(int x)
{
    if(x==0)
    {
        return;
    }
    int digit= x%10;
    // x/10;
    fun(x/10);
    printf("%d ",digit);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
}
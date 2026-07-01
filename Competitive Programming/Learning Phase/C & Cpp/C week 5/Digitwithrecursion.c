#include<stdio.h>
void fun(int n)
{
    if(n==0)
    {
        return;
    }
    int digit= n%10;
    fun(n/10);
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
        fun(n);

    }
}
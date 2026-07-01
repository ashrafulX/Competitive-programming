#include<stdio.h>
void fun(int x)
{
    if(x==6)
    {
        return;
    }
    fun(x+1);
    printf("%d ",x);
}
int main()
{
    fun(1);
}
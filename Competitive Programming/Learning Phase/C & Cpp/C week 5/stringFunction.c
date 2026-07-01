#include<stdio.h>
void fun(char a[])
{
    printf("%s",a);
}
int main()
{
    char str[101];
    scanf("%s",str);
    fun(str);
}
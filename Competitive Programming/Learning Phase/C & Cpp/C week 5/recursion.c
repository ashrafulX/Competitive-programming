#include<stdio.h>
void hello()
{
    printf("Hello ");
}
void world()
{   
    hello();
    world();
    printf("world");
}
int main()
{
    world();
    return 0;
}
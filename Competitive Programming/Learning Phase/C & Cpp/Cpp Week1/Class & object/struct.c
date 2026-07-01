#include<stdio.h>
struct ami
{
    int id;
    char name[10];
};
int main()
{
    struct ami a;
    scanf("%d",&a.id);
    scanf("%s",a.name);
    printf("ID %d\n",a.id);
    printf("ID %s\n",a.name);
}

#include<stdio.h>
int main()
{
    char a[10];
    fgets(a,sizeof(a),stdin);
    printf("%d ",a[0]);
}
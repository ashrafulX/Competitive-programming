#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int dif;
    dif= a - b;
    printf("%d",abs(dif));   
    return 0;
}
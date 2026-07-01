#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    long long sum=0;
    while(t--)
    {
        long long a;
        scanf("%lld",&a);
        long long *b=&a;
        sum=sum+ *b;
    }
    printf("%lld",llabs(sum));
    return 0;
}
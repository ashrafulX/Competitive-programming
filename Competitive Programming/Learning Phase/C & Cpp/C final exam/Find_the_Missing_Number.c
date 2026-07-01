#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {   
        long long a;
        int b,c,d;
        scanf("%lld %d %d %d",&a,&b,&c,&d);
        long long sum=(long long)b*c*d;
        if(sum==0)
        {
           if(a==0)
           {
            printf("0\n");
           }
           else{
            printf("-1\n");
           }
        }
        else {
            if(a%sum==0)
            {
                printf("%lld\n",a/sum);
            }
            else {
                printf("-1\n");
            }
        }
            
        
        
        
    }
}
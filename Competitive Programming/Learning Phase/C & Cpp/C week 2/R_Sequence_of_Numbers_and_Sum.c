#include<stdio.h>
#include <stdbool.h>
int main()
{
    while(true)
    {   int a,b;
        scanf("%d",&a);
        scanf("%d",&b);
        int sum=0;
        if(a<=0 || b<=0)
        {
            break;
        }
        if(a>b)
        {
            int temp;
           temp=a;
           a=b;
           b=temp;  
        }
        for(int j=a;j<=b;j++)
        {
            sum+=j;
            printf("%d ",j);
        }
        printf("sum =%d\n",sum);
            
       
        
    }
}
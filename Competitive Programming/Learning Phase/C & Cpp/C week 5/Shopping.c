#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<=1000)
    {
        printf("Bad luck!\n");
    }
    else if(n>1000)
    {
        printf("I will buy Punjabi\n");
        int remain= n-1000;
        if(remain>=500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }

    }
}
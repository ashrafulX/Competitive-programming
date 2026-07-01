#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int cnt2=0,cnt3=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            continue;
        }
        if(a[i]%2==0)
        {
            cnt2++;
            if(a[i]%3==0)
            {
                
            }
        }
        else if(a[i]%3==0)
        {
            cnt3++;
        }
    }
    printf("%d %d",cnt2,cnt3);
}
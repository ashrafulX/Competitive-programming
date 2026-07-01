#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count=0;
    int i=0,j=n-1;
    int pal=1;
    while(i<=j)
    {
        if(a[i]!=a[j])
        {
            pal=0;
            break;
        }
        i++;
        j--;
    } 
    if(pal==1)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
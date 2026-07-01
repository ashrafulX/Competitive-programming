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
    while(i<j)
    {
        if(a[i]==a[j])
        {
            count++;
        }
        i++;
        j--;
    }
    if(count<=0)
    {
        printf("NO");
    }
    else{
        printf("YES");
    }
    return 0;
}

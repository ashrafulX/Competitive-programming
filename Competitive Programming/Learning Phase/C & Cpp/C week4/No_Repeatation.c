#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int f[100005]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }   
    for(int i=0;i<n;i++)
    {
        int val=a[i];
        f[val]++;
    }
    int cnt=0;
    for(int i=0;i<=n;i++)
    {
        if(f[i]==1)
        {
            cnt++;
        }
        
    }
    printf("%d",cnt);
    return 0;
}
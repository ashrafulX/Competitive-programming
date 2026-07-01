#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int f[100001];
    // int find;
    // scanf("%d",&find);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }   
    for(int i=0;i<n;i++)
    {
        int val=a[i];
        f[val]++;
    }
    int max=f[0];
    int val=0;
    for(int i=1;i<=n;i++)
    {
        if(max<f[i])
        {
            max=f[i];
            val=i;
        }
    }
    printf("%d",val);
    return 0;
}
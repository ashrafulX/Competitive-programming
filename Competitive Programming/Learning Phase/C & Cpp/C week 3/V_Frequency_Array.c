#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d",&n);
   int a[n];
   int cnt;
   scanf("%d",&cnt);
   int count[100000]={0};

   for(int i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }

   for(int i=0;i<n;i++)
   {
        int tmp= a[i];
        count[a[i]]++;
   }
   for(int i=1;i<=cnt;i++)
   {
    printf("%d\n",count[i]);
   }
   

    return 0;
}
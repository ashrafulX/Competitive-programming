#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int f;
    scanf("%d",&f); 
    int find[100001];
    for(int i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    } 
    

    for(int i=0;i<n;i++)
    {
      int val=a[i];
      find[val]++;
     //  printf("%d %d\n",val, find [val]);
    }
    for(int i=1;i<=f;i++)
    {
     printf("%d\n",find[i]);
    }
    return 0;
}
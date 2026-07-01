#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    int b;
    scanf("%d",&b);
    int c[b];
    int find[1001]={0};

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            find[a[i][j]]++;
        }
    }

    for(int i=0;i<b;i++)
    {
        scanf("%d",&c[i]);
    }

    for(int i=0;i<b;i++)
    {
        printf("%d\n",find[c[i]]);
    }
    return 0;
}
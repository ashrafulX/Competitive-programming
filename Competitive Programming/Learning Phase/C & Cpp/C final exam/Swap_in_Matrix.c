#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    for(int i=0;i<row;i++)
    {
        int temp= a[i][0];
        a[i][0]=a[i][col-1];
        a[i][col-1]=temp;
    }
    for(int i=0;i<col;i++)
    {
        int temp= a[0][i];
        a[0][i]=a[row-1][i];
        a[row-1][i]=temp;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
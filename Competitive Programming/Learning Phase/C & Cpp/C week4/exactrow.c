#include<stdio.h>
#include<string.h>
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

    int find;
    scanf("%d",&find);
    for(int i=0;i<col;i++)
    {
        printf("%d ",a[find][i]);
    }
    return 0;
}
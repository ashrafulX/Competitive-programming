#include<stdio.h>
#include<string.h>
int main()
{
    int row,column;
    scanf("%d %d",&row,&column);
    int a[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
            // printf("a[%d]a[%d] ",i,j);
        }
        printf("\n");
    }   
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d ",a[i][j]);
            
        }
        printf("\n");
    }   
    return 0;
}
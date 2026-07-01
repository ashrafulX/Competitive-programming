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
    int cnt=0;
    int find;
    scanf("%d",&find);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i][j]==find)
            {
                cnt=1;
                // break;
            }
        }
    }
    if(cnt==1)
    {
        printf("will not take number\n");
    }
    else{
        printf("will take number");
    }
    return 0;
}
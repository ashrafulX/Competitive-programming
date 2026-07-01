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
    int flag=0;
    int count=row*col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i][j]==0)
            {
                flag++;
            }
        }
    }   
    if(flag==count)
    {
        printf("yes");
    }
    else{
        printf("no");
    }

    
    return 0;
}
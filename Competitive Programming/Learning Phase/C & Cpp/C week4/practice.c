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
    int cnt= 1;
    if(row != col)
    {
        // cnt=0;
        printf("no");
        return 0;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i+j==row-1)
            {
                if(a[i][j] != 1)
                {
                    cnt=0;
                    // break;
                }
                continue;
            }
            if(a[i][j] !=0)
            {
                cnt=0;
                // break;
                
            }
        }
    }
    if(cnt==1)
    {
        printf("yes");
    }
    else {
        printf("no");
    }
    
    return 0;
}
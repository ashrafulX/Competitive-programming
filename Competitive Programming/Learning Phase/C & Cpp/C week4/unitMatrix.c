#include<stdio.h>
#include<string.h>
int main()
{
    int row,col;
    scanf("%d %d",&col,&row);
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }   
    int cnt=0;
    if(row != col)
    {
        printf("no");
        return  0;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                if(a[i][j]==1)
                {
                    cnt++;
                }
            }
            if(a[i][j] !=0)
            {
                cnt++;
                break;
            }
        }
    }
    if(cnt==0)
    {
        printf("no");
    }
    else{
        printf("yes");
    }
    // printf("%d",cnt);
    return 0;
}
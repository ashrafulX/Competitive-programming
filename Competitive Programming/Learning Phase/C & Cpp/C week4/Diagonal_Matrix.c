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
            if(i+j==row-1) //primary diagonal    {i+j==row-1 secondary diagonal}
            {
                continue;
            }
            if(a[i][j] !=0)
            {
                cnt=0;
                
            }
        }
    }
    if(cnt==1)
    {
        printf("yes");
    }
    else if(cnt==0){
        printf("no");
    }
    
    return 0;
}
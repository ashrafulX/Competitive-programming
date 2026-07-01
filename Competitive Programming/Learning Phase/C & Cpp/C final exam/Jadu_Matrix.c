#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }   
    int chk=1;
    if(row != col)
    {
        printf("NO");
        return 0;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                if(a[i][j] != 1)
                {
                    chk=0;
                    break;
                }
            }
            if(i+j==row-1)
            {
                if(a[i][j] != 1)
                {
                    chk=0;
                    break;
                }
            }
            if(i !=j && i+j != row-1)
            {
                if(a[i][j] != 0)
                {
                    chk=0;
                    break;
                }
            }
        }
    }
    if(chk==1)
    {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
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
    int find[b];
     
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    } 
    
    for(int i=0;i<b;i++)
    {
        scanf("%d",&find[i]);
    }

    for(int i=0;i<b;i++)
    {
        int cnt=0;
        for(int j=0;j<row;j++){
            for(int k=0;k<col;k++)
            {
                if (a[j][k]== find[i])
                {
                    cnt++;
                }
            }
        }
        printf("%d\n",cnt);
    }

    return 0;
}
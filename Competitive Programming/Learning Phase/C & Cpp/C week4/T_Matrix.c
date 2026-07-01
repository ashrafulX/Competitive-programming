#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int row;
    scanf("%d",&row);
    int a[row][row];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }   
    int psum=0;
    int ssum=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(i==j)
            {
                psum=psum+a[i][j];
            }
            if(i+j==row-1)
            {
                ssum=a[i][j]+ssum;
            }
        }
    }   
    int res= abs(psum-ssum);
    printf("%d\n",res);
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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
    int cnt=1; 
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(i==j)
            {
                if(a[i][j] !=1)
                {
                    cnt=0;
                    break;
                }
            }
            if(i != j)
            {
                if(a[i][j] !=0 )
                {
                    cnt=0;
                    break;
                }
            }
        }
    }
    if(cnt==1)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
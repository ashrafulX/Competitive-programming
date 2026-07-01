// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int count=0;
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             count++;
//         }

//     }
//     if(count==0)
//     {
//         printf("YES");
//     }   
//     else 
//     {
//         printf("NO");
//     }
//     return 0;
// }


#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            count++;
            
        }
    }   
    if(count>0)
    {
        printf("NO");
    }
    else
    printf("YES");
    
    return 0;
}
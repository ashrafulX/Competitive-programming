#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    scanf("%s",str);
    int len=strlen(str);
    int i=0,j=len-1;
    int pal=1;
    while(i<=j)
    {
        if(str[i]!=str[j])
        {
            pal=0;
            break;
        }
        i++;
        j--;
    }
        if(pal==1)
        {
            printf("YES");
        }
        else{
            printf("NO");
        }


    return 0;
}
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[101];
//     scanf("%s",a);
//     int len=strlen(a);
//     char b[101];
//     strcpy(b,a);
//     int pal=1;
//     for(int i=0;i<len;i++)
//     {
//         if(a[i] != b[i])
//         {
//             pal=0;
//             break;
//         }
//     }
//     if(pal==1)
//     {
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
//     return 0;
// }
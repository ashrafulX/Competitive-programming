#include<stdio.h>
#include<string.h>
// hello
int main()
{
    char a[]={'h','e','l','l','o','\0'};
    char b[10001]; 
    scanf("%s",b);
    int blen=strlen(b);
    int alen=strlen(a);
    
    int i=0,j=0;
    while(j<blen)
    {
        if(a[i]==b[j])s
        {
            i++;
        }
        j++;
    }
    if (i==alen)
    {
        printf("YES\n");
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
//     int a[]= {1,2,3,4,5,6,7,8,9};
//     int b[]={1,2,3};
//     int i=0,j=0;
//     while (j<9)
//     {
//         if(b[i]==a[j])
//         {
//             i++;
//         }
//         j++;
//     }
//     if(i==3)
//     {
//         printf("YES");
//     }
//     else {
//         printf("NO");
//     }
//     return 0;
// }
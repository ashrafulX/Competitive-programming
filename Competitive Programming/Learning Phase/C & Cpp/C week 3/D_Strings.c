// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[100];
//     char b[11];
//     scanf("%s %s",a,b);
//     int lena=strlen(a);
//     int lenb=strlen(b);
    
//     printf("%d %d\n",lena,lenb);
    
//     printf("%s%s\n",a,b);
//     // strcat(a,b);
//     // printf("%s\n",a);
//     char temp=a[0];
//     a[0]=b[0];
//     b[0]=temp;
//     printf("%s %s",a,b);
    
// }

#include<stdio.h>
#include<string.h>
int main()
{
    char a[11];
    char b[11];
    scanf("%s",a);   
    scanf("%s",b);
    int alen=strlen(a);
    int blen=strlen(b);
    printf("%d %d\n",alen,blen);
    char c[22];
    strcat(c,a);
    strcat(c,b);
    printf("%s\n",c);
    char temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    printf("%s %s",a,b);   
    return 0;
}
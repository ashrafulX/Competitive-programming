// Recursive and normall way chekout full code
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// #include<math.h>
// int main()
// {
//     char a[201];
//     fgets(a,sizeof(a),stdin);
//     int cnt=0;
//     for(int i=0;i<strlen(a);i++)
//     {
//         if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
//         {
//             cnt++;
//         }
//         if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
//         {
//             cnt++;
//         }
//     }  
//     printf("%d",cnt); 
//     return 0;
// }


// Recursive way
#include<stdio.h>
int solve(char a[],int index)
{
    if(a[index]=='\0')
    {
        return 0;
    }
    int ans= solve(a,index+1);
    if(a[index]=='a' || a[index]=='e'|| a[index]=='i'|| a[index]=='o' || a[index]=='u')
    {
        return ans+1;
    }
    
    if(a[index]=='A' || a[index]=='E'|| a[index]=='I'|| a[index]=='O' || a[index]=='U')
    {
        return ans+1;
    } 
    return ans;
    
}
int main()
{
    char a[202];
    fgets(a,sizeof(a),stdin);
    int cnt=solve(a,0);
    printf("%d",cnt);
}
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++)
//     {
//         int x;
//         scanf("%d",&x);
//         if(x%2==0)
//         {
//             printf("%d EVEN\n",x);
//         }
//         else{
//             printf("%d ODD\n",x);
//         }
//         if (x<0)
//         {
//             printf("%d Negative\n",x);
//         }
//         else{
//             printf("%d Positive\n",x);
//         }
        
//     }
// }
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int even=0,odd=0,pos=0,neg=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d  even\n",a[i]);
            even++;
        }
        else {
            printf("%d  Odd\n",a[i]);
            odd++;
        }
        if(n<0)
        {
            printf("%d  Negative\n",a[i]);
            neg++;
        }
        else if(n>0){
            printf("%d  Positive\n",a[i]);
            pos++;
        }
    }
    printf("EVEN %d\nODD %d\nPOSITIVE %d\nNEGATIVE %d",even,odd,pos,neg);

}
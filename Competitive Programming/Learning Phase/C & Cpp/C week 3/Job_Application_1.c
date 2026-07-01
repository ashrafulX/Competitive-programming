#include<stdio.h>
// If experience is less than 1, it's "Entry-level candidate".
// If experience is between 1 and 3 (inclusive), it's "Junior candidate".
// If experience is between 4 and 7 (inclusive), it's "Mid-level candidate".
// If experience is greater than 7, it's "Senior candidate"
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a;
        scanf("%d",&a);
        if(a<1)
        {
            printf("Entry-level candidate\n");
        }
        else if(a>=1 && a<=3)
        {
            printf("Junior candidate\n");
        }
        else if(a>=4 && a<=7)
        {
            printf("Mid-level candidate\n");
        }
        else if(a>7)
        {
            printf("Senior candidate\n");
        }
    }   
    return 0;
}
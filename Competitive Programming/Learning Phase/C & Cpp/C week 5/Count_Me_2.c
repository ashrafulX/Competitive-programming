#include<stdio.h>
#include<string.h>
int main()
{
    char a[100001];
    scanf("%s",a);
    int len=strlen(a);
    int cnt=0;
    for(int i=0;i<len;i++)
    {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            // cnt++;
        }
        else{
            cnt++;
        }
    }
    printf("%d",cnt);
}
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[101];
    scanf("%s",ch); 
    fgets(ch,sizeof(ch),stdin);
    // scanf("%s",ch);
    int count=0;
    // for(int i=0;ch[i] != '\0';i++)
    // {
    //     count++;
    // }
    int i=0;
    while(ch[i] != '\0')
    {
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}
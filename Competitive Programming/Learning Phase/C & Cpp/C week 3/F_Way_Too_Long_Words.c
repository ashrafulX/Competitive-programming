#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char ch[101];
        scanf("%s",ch);
        int len=strlen(ch);
        if(len<=10)
        {
            printf("%s\n",ch);
        }
        else{
            printf("%c%d%c\n",ch[0],len-2,ch[len-1]);
        }

    }
}
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    while(N--)
    {
         char S[51];
         char T[51];
        scanf("%s %s", S, T);

        int j = 0, k = 0;

       
        while (S[j] != '\0' && T[k] != '\0') {
            printf("%c%c", S[j], T[k]);
            j++;
            k++;
        }

        
        while (S[j] != '\0') {
            printf("%c", S[j]);
            j++;
        }

        while (T[k] != '\0') {
            printf("%c", T[k]);
            k++;
        }

        printf("\n");
    }

    return 0;
}



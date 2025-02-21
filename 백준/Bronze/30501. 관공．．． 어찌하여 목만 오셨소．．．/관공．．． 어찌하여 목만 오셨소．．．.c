#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


int main() 
{
    int N;
    scanf("%d", &N);

    char S[1001][101] = {};

    for (int i = 0; i < N; i++)
    {
        scanf("%s", S[i],(unsigned)sizeof(S[i]));

    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < strlen(S[i]); j++)
        {
            if (S[i][j] == 'S')
            {
                printf("%s\n", S[i]);
            }
        }
    }

    return 0;
}


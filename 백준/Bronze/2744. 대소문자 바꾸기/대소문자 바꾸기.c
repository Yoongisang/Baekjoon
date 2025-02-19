#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char N[101] = {};
    int l;
    scanf("%s", N,(unsigned)sizeof(N));
    l = strlen(N);

    for (int i = 0; i < l; i++)
    {
        if (N[i] < 97)
        {
            printf("%c", N[i] + 32);
        }
        if (N[i] > 90)
        {
            printf("%c", N[i] - 32);
        }
    }
    return 0;
}
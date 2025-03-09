#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int main()
{
    int set[7] = {};
    int input[7] = {};
    set[0] = 1;
    set[1] = 1;
    set[2] = 2;
    set[3] = 2;
    set[4] = 2;
    set[5] = 8;

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &input[i] );
        set[i] = set[i] - input[i];
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", set[i]);
    }
    printf("\n");
    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    printf("%d\n", (N * M ) - 1);
    return 0;
}
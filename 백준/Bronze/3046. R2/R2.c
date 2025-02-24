#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int R1;
    int S;
    scanf("%d %d", &R1, &S);

    printf("%d\n", (S * 2) - R1);
    return 0;
}
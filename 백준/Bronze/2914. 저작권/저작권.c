#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    float A, I;
    int S;
    scanf("%f %f", &A, &I);
    //printf("%.2f %.2f\n", A, I);
    S = (I - 1) * A;
    printf("%d\n", S + 1);
    return 0;
}
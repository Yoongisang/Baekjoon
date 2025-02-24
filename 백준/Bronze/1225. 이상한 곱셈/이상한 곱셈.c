#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    char A[10001] = {};
    char B[10001] = {};
    long long int sum = 0;

    scanf("%s", A);
    scanf("%s", B);

    int ALen = strlen(A);
    int BLen = strlen(B);

    for (int i = 0; i < ALen; i++)
    {
        for (int j = 0; j < BLen; j++)
        {
            sum += (A[i] - '0') * (B[j] - '0');
        }
    }

    printf("%lld", sum);
    return 0;
}
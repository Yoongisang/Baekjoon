#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int N = 1;
    long long sum = 1;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        sum *= i;
    }

    printf("%lld\n", sum);
    return 0;
}
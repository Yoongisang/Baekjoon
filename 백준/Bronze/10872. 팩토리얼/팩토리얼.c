#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() 
{
    int N;
    scanf("%d", &N);
    int sum = 1;

    for (int i = 1; i <= N; i++)
    {
        sum *= i;
    }
    printf("%d\n", sum);

    return 0;
}
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() 
{
    int N;
    int A[100] = {};
    int v;
    int sum = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    scanf("%d", &v);

    for (int i = 0; i < N; i++)
    {
        if (v == A[i])
        {
            sum++;
        }
    }

    printf("%d\n", sum);

    return 0;
}
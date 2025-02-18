#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() 
{
    int N;
    int A, B;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &A, &B);
        printf("%d\n", A + B);
    }

    return 0;
}
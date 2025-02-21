#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


int main() 
{
    int N;
    int A[1000] = {0};
    int B[1000] = {0};
    int X[1000] = {0};
    int W[1000] = { 0 };

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        scanf("%d", &B[i]);
        scanf("%d", &X[i]);

        W[i] = (A[i] * (X[i] - 1)) + B[i];
    }

    for (int i = 0; i < N; i++)
    {
   
        printf("%d\n", W[i]);
    }
    return 0;
}


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() 
{
    int N, M;
    scanf("%d %d", &N, &M);
    int A[101][101] = {};
    int B[101][101] = {};
    int C[101][101] = {};

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }  
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
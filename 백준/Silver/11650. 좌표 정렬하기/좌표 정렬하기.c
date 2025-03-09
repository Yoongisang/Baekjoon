#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int compare(const void* a, const void* b)
{
    int* p1 = *(int**)a;
    int* p2 = *(int**)b;
    if (p1[0] != p2[0])
    {
        return p1[0] - p2[0];
    }
    return p1[1] - p2[1];
}
int main()
{
    int N;

    scanf("%d", &N);
    int** numbs = (int**)malloc(N * sizeof(int*));

    if (numbs == NULL)  
    {
        printf("메모리할당 실패\n");
        return 1;
    }
    for (int i = 0; i < N; i++)
    {
        numbs[i] = (int*)malloc(2 * sizeof(int));
        if (numbs[i] == NULL)
        {
            printf("메모리 할당 실패\n");
            for (int j = 0; j < i; j++)
            {
                free(numbs[j]);
            }
            free(numbs);
            return 1;
        }
    }



    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &numbs[i][j]);
        }
        
    }


    qsort(numbs, N, sizeof(int*), compare);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", numbs[i][j]);
        }
        printf("\n");

    }

    for (int i = 0; i < N; i++)
    {
        free(numbs[i]);
    }

    free(numbs);
    return 0;
}
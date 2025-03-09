#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}
int main()
{
    int N;

    scanf("%d", &N);
    int* numbs = (int*)malloc(sizeof(int) * N);
    int* result = (int*)malloc(sizeof(int) * N);
    if (numbs == NULL)
    {
        printf("메모리 할당 실패\n");
        
        return 1;
    }

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &numbs[i]);
    }

    qsort(numbs, N, sizeof(int), compare);


    for (int i = 0; i < N; i++)
    {
        printf("%d\n", numbs[i]);
    }

    free(numbs);
    return 0;
}
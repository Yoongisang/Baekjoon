#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
}xy;

int compare(const void* a, const void* b)
{
    xy* p1 = (xy*)a;
    xy* p2 = (xy*)b;
    if (p1->y == p2->y)
    {
        return p1->x - p2->x;
    }
    return p1->y - p2->y;
}

int main()
{
    int N;
    scanf("%d", &N);
    xy* point = (xy*)malloc(N * sizeof(xy));

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &point[i].x, &point[i].y);
    }

    qsort(point, N, sizeof(xy), compare);

    for (int i = 0; i < N; i++)
    {
        printf("%d %d\n", point[i].x, point[i].y);
    }

    free(point);
    return 0;
}
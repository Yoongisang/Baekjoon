#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int weight;
    int height;
    int rank;
}status;

int main()
{
    int N ;
    scanf("%d", &N);
    status* s = (status*)malloc(N * sizeof(status));
    if (s == NULL)
    {
        fprintf(stderr, "메모리 할당 실패\n");
        return 1;
    }
    for (int i = 0; i < N; i++)
    {
        s[i].rank = 0;
    }
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &s[i].weight, &s[i].height);
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (s[i].weight < s[j].weight && s[i].height < s[j].height)
            {
                s[i].rank++;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", s[i].rank + 1);
    }
    printf("\n");

    free(s);
    return 0;
}
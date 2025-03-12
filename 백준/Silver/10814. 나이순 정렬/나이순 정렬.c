#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    int age;
    char name[110];
    int order;
}Member;

int compare(const void* a, const void* b)
{
    Member* m1 = (Member*)a;
    Member* m2 = (Member*)b;
    if (m1->age == m2->age)
    {
        return m1->order - m2->order;
    }
    else
    {    
    return m1->age - m2->age;
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    Member* members = (Member*)malloc(N * sizeof(Member));
    for (int i = 0; i < N; i++)
    {
        scanf("%d %s", &members[i].age, members[i].name);
        members[i].order = i;
    }
    qsort(members, N, sizeof(Member), compare);
    for (int i = 0; i < N; i++)
    {
        printf("%d %s\n", members[i].age, members[i].name);
    }
    free(members);
    return 0;
}
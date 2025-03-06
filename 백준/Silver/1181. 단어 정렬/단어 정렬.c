#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 51

int cmp(const void* a, const void* b)
{
    char* s1 = *(char**)a;
    char* s2 = *(char**)b;

    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 == len2)
    {
        return strcmp(s1, s2);
    }
    return len1 - len2;
}



int main()
{
    int N;
    scanf("%d", &N);

    char** words = (char**)malloc(N * sizeof(char*));
    if (words == NULL)
    {
        fprintf(stderr, "메모리 할당 실패\n");
        return 1;
    }

    for (int i = 0; i < N; i++)
    {
        words[i] = (char*)malloc(MAX * sizeof(char));
        if (words[i] == NULL)
        {
            fprintf(stderr, "메모리 할당 실패\n");
            return 1;
        }
        scanf("%s", words[i]);
    }
        qsort(words, N, sizeof(char*), cmp);

        printf("%s\n", words[0]);
        for (int i = 1; i < N; i++) 
        {
            if (strcmp(words[i], words[i - 1]) != 0) 
            {
                printf("%s\n", words[i]);
            }
        }
        for (int i = 0; i < N; i++) 
        {
            free(words[i]);
        }
        
        free(words);
    return 0;
}
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int T;
    scanf("%d", &T);
    char A[11][1001] = {};
    int l = 0;

    for (int i = 0; i < T; i++)
    {
        
        scanf("%s", A[i], (unsigned)sizeof(A[i]));

    }
    
    for (int i = 0; i < T; i++)
    {
        int l = strlen(A[i]);
        printf("%c%c\n", A[i][0], A[i][l - 1]);
    }
    return 0;
}
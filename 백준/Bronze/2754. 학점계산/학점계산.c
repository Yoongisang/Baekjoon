#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    float C;
    char S[10] = {};
    scanf("%s", S, (unsigned)sizeof(S));
    if (strcmp(S,"A+") == 0)
    {
        C = 4.3;
        printf("%.1f", C);
    }
    else if (strcmp(S, "A0") == 0)
    {
        C = 4.0;
        printf("%.1f", C);
    }
    else if (strcmp(S, "A-") == 0)
    {
        C = 3.7;
        printf("%.1f", C);
    }
    else if (strcmp(S, "B+") == 0)
    {
        C = 3.3;
        printf("%.1f", C);
    }
    else if (strcmp(S, "B0") == 0)
    {
        C = 3.0;
        printf("%.1f", C);
    }
    else if (strcmp(S, "B-") == 0)
    {
        C = 2.7;
        printf("%.1f", C);
    }
    else if (strcmp(S, "C+") == 0)
    {
        C = 2.3;
        printf("%.1f", C);
    }
    else if (strcmp(S, "C0") == 0)
    {
        C = 2.0;
        printf("%.1f", C);
    }
    else if (strcmp(S, "C-") == 0)
    {
        C = 1.7;
        printf("%.1f", C);
    }
    else  if (strcmp(S, "D+") == 0)
    {
        C = 1.3;
        printf("%.1f", C);
    }
    else if (strcmp(S, "D0") == 0)
    {
        C = 1.0;
        printf("%.1f", C);
    }
    else  if (strcmp(S, "D-") == 0)
    {
        C = 0.7;
        printf("%.1f", C);
    }
    else  if (strcmp(S, "F") == 0)
    {
        C = 0.0;
        printf("%.1f", C);
    }
    return 0;
}
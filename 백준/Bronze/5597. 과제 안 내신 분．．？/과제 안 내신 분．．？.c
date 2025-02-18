#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() 
{
    int N[28];
    int missingCount = 0;
    int missing[2];

    for (int i = 0; i < 28; i++)
    {
        scanf("%d", &N[i]);
    }

    for (int i = 1; i <= 30; i++)
    {
        int found = 0;
        for (int j = 0; j < 28; j++)
        {
            if (i == N[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            missing[missingCount] = i;
            missingCount++;
        }
    }

    printf("%d\n", missing[0]);
    printf("%d\n", missing[1]);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool contains666(int num)
{
    char str[20];
    sprintf(str, "%d", num);
    return strstr(str, "666") != NULL;
}
int main()
{
    int N;
    scanf("%d", &N);
    int count = 0;
    int number = 666;
    while (1)
    {
        if (contains666(number))
        {
            count++;
            if (count == N)
            {
                printf("%d\n", number);
                break;
            }
        }
        number++;
    }
    return 0;
}
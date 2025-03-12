#include <stdio.h>
#include <math.h>
int main() 
{
    int N[5] = {};
    int count[10] = {};
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &N[i]);
        count[N[i]]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (count[i] % 2 == 1)
        {
            printf("%d\n", i);
            break;
        }
        
    }
    

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char a[3][9];
    int num = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%s", a[i]);
   
    }

    if (a[0][0] != 'F' && a[0][0] != 'B')
    {
        num = atoi(a[0]);
        num += 3;
    }
    else if (a[1][0] != 'F' && a[1][0] != 'B')
    {
        num = atoi(a[1]);
        num += 2;
    }
    else if (a[2][0] != 'F' && a[2][0] != 'B')
    {
        num = atoi(a[2]);
        num += 1;
    }

    if (num % 15 == 0)
    {
        printf("FizzBuzz\n");
    }
    else if (num % 3 == 0)
    {
        printf("Fizz\n");
    }
    else if (num % 5 == 0)
    {
        printf("Buzz\n");
    }
    else
    {
        printf("%d", num);
    }

    return 0;
}
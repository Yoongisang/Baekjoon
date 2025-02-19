#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char str[101] = {};
 

    scanf("%s", &str,(unsigned)sizeof(str));

    int a = strlen(str);

    printf("%d\n", a);

    return 0;
}
#include <stdio.h>


int main()
{
    char input;
    scanf("%c", &input);
    
    if (input == 'M')
    {
        printf("MatKor\n");
    }
    else if (input == 'W')
    {
        printf("WiCys\n");
    }
    else if (input == 'C')
    {
        printf("CyKor\n");
    }
    else if (input == 'A')
    {
        printf("AlKor\n");
    }
    else if (input == '$')
    {
        printf("$clear\n");
    }
    return 0;
}

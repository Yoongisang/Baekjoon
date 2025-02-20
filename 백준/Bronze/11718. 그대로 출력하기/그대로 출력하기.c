#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char s[101];
	while (fgets(s, sizeof(s), stdin) != NULL)
	{
		printf("%s", s);
	}
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[1000001];
	if (fgets(str, sizeof(str), stdin) != NULL)
	{
		size_t len = strlen(str);
		if (len > 0 && str[len - 1] == '\n')
		{
			str[len - 1] = '\0';
		}

		char* start = str;
		while (*start && isspace((unsigned char)*start))
		{
			start++;
		}
		if (*start == '\0')
		{
			printf("0\n");
			return 0;
		}

		char* end = start + strlen(start) - 1;
		while (end > start && isspace((unsigned char)*end))
		{
			*end = '\0';end--;
		}
		int spaceCount = 0;
		for (size_t i = 0; str[i] != '\0'; i++)
		{
			if (start[i] == ' ')
			{
				spaceCount++;
			}
		}
		printf("%d\n", spaceCount + 1);
	}
	
	


	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char s[257];
	while (fgets(s, sizeof(s), stdin) != NULL)
	{
		s[strcspn(s, "\n")] = '\0';
		s[strcspn(s, "\r")] = '\0';

		if (strcmp(s,"#") == 0)
		{
			break;
		}
		int count = 0;
		for (int i = 0; s[i] != '\0'; i++)
		{
			char ch = tolower(s[i]);
			if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			{
				count++;
			}
		}
		printf("%d\n", count);
	}
    return 0;
}
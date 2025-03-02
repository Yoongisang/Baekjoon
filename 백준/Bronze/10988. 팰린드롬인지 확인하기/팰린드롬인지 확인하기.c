#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char str[110] = {};
	scanf("%s", &str);
	int len = strlen(str);
	int sum = 0;

	for (int i = 0; i < len/2; i++) // 0 1 2 3 4 5
	{
		if (str[i] == str[len - i - 1])
		{
			sum += 0;
		}
		else if (str[i] != str[len - i - 1])
		{
			sum++;
		}
	}

	if (sum == 0)
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}


	return 0;
}

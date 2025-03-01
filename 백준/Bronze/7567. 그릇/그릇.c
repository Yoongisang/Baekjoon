#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char N[55] = {};
	int len = 10;

	scanf("%s", &N);
	int NLen = strlen(N);
	for (int i = 1; i < NLen; i++)
	{
		if (N[i] == N[i - 1])
		{
			len += 5;
		}
		else if (N[i] != N[i - 1])
		{
			len += 10;
		}
	}

	printf("%d\n", len);

	return 0;
}

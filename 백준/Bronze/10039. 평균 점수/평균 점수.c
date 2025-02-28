#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int a[5] = {};
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		if (a[i] < 40)
		{
			a[i] = 40;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		sum += a[i];
	}

	printf("%d\n", sum / 5);
	return 0;
}

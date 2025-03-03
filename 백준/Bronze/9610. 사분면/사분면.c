#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
	int n;
	int x[1001] = {};
	int y[1001] = {};
	int Q1 = 0;
	int Q2 = 0;
	int Q3 = 0;
	int Q4 = 0;
	int AXIS = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (x[i] == 0 || y[i] == 0)
		{
			AXIS++;
		}
		else if (x[i] > 0 && y[i] > 0)
		{
			Q1++;
		}
		else if (x[i] < 0 && y[i] > 0)
		{
			Q2++;
		}
		else if (x[i] < 0 && y[i] < 0)
		{
			Q3++;
		}
		else if (x[i] > 0 && y[i] < 0)
		{
			Q4++;
		}
	}

	printf("Q1: %d\n", Q1);
	printf("Q2: %d\n", Q2);
	printf("Q3: %d\n", Q3);
	printf("Q4: %d\n", Q4);
	printf("AXIS: %d\n", AXIS);
	return 0;
}

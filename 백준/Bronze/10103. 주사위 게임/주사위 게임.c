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
	int A = 100;
	int B = 100;
	scanf("%d", &n);

	for (size_t i = 0; i < n; i++)
	{
		int a;
		int b;
		scanf("%d %d", &a, &b);
		if (a > b)
		{
			B -= a;
		}
		else if (b > a)
		{
			A -= b;
		}
	}
	printf("%d\n%d\n", A, B);
	return 0;
}

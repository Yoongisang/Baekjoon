#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	float S;
	long long int N = 1;
	float a;
	scanf("%f", &S);
	while (1)
	{
		if (N * (N + 1) > 2 * S)
		{
			N--;
			break;
		}
		N++;
	}
	printf("%ld\n", N);
	return 0;
}

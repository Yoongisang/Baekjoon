#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int N;
	scanf("%d", &N);
	int i = 2;
	while (N != 1)
	{
		int temp;
		if (N % i == 0)
		{
			temp = N / i;
			N = temp;
			printf("%d\n", i);
			i = 2;
		}
		else
		{
			i++;
		}
	}
	return 0;
}

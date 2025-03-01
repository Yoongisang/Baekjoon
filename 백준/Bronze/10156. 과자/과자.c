#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int K, N, M;
	scanf("%d %d %d", &K, &N, &M);
	
	if ((K * N) - M > 0)
	{
		printf("%d\n", (K * N) - M);
	}
	if ((K * N) - M <= 0)
	{
		printf("0\n");
	}

	return 0;
}

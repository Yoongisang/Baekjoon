#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
	int T;
	int A, B, C;
	A = 300;
	B = 60;
	C = 10;
	int sum[3] = {};
	scanf("%d", &T);

	if (T / A > 0)
	{
		int temp;
		temp = T / A;
		sum[0] = temp;
		T -= temp * A;
	}
	
	if (T / B > 0)
	{
		int temp;
		temp = T / B;
		sum[1] = temp;
		T -= temp * B;
	}
	
	if (T / C > 0)
	{
		int temp;
		temp = T / C;
		sum[2] = temp;
		T -= temp * C;
	}
	
	if (T == 0)
	{
		printf("%d %d %d\n", sum[0], sum[1], sum[2]);
	}
	else if (T != 0)
	{
		printf("-1\n");
	}
	return 0;
}

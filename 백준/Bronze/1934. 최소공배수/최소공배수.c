#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int N;
	int A[1001] = {};
	int B[1001] = {};
	int max;
	int min = 1;
	
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int temp = 1;
		int a, b;
		scanf("%d %d", &A[i], &B[i]);
		a = A[i];
		b = B[i];
		while (temp != 0)
		{
			temp = A[i] % B[i];
			A[i] = B[i];
			B[i] = temp;
			min = A[i];
		}
		printf("%d\n", (a * b) / min);
	}
	return 0;
}

#include <stdio.h>

int main()
{
	int N;
	int X;
	int A[10000];
	scanf("%d", &N);
	scanf("%d", &X);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}

	for (int i = 0; i < N; i++)
	{
		if (A[i] < X)
		{
			printf("%d ", A[i]);
		}

	}

	return 0;
}
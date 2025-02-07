#include <stdio.h>
#include <string.h>



int main()
{
	int N, M;
	int num[100] = {};
	int Max = 0;
	scanf("%d", &N);
	scanf("%d", &M);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < N - 2; i++)
	{
		for (int j = i + 1; j < N - 1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				int sum = 0;
				sum = num[i] + num[j] + num[k];
				if (Max < sum && sum <= M)
				{
					Max = sum;
				}
			}
		}
	}

	printf("%d\n", Max);
	return 0;
}




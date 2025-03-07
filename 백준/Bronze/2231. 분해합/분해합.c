#include <stdio.h>
#include <string.h>



int main()
{
	int N;
	int N_result = 0;
	
	scanf(" %d", &N);

	for (int i = 1; i < N; i++)
	{
		int sum = 0;
		int result = 0;
		char str[1000001];
	
		sprintf(str, "%d", i);

		for (int j = 0; j < (int)strlen(str); j++)
		{
			sum += str[j] - '0';
		}
		result = i + sum;

		if (result == N)
		{
			N_result = i;
			break;
		}

	}

	printf("%d\n", N_result);

	return 0;
}




#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
	int N;
	scanf("%d", &N);

	int *count = (int *)calloc(10001, sizeof(int));
	if (count == NULL)
	{
		printf("메모리 할당 실패\n");
		return 1;
	}

	int num;

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);
		count[num]++;
	}

	for (int i = 0; i <= 10000; i++)
	{
		while (count[i] > 0)
		{
			printf("%d\n", i);
			count[i]--;
		}
	}


	free(count);
	return 0;
}




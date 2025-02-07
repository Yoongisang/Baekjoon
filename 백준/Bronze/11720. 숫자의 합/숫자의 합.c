#include <stdio.h>
#include <string.h>

int main()
{
	int N;
	char nums[110];
	
	scanf("%d", &N);
	scanf(" %s", &nums, 110);

	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += nums[i] - '0';

	}
	printf("%d\n", sum);

	return 0;
}
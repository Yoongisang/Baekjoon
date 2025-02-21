#include <stdio.h>
#include <string.h>

int main(void) {
    int N;
	int f = 0;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			f += i;
		}
	}

	printf("%d\n", (f * 5) - 24);

    return 0;
}
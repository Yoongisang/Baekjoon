#include <stdio.h>

int main()
{
	int A ,B, C;
	scanf("%d %d %d", &A, &B, &C);

	if (A == B && B ==C)
	{
		printf("%d\n", 10000 + (A * 1000));
	}

	if (A == B && A !=C && B != C)
	{
		printf("%d\n", 1000 + (A * 100));
	}

	if (A == C && A != B && B != C)
	{
		printf("%d\n", 1000 + (A * 100));
	}

	if (B == C && B != A && A != C)
	{
		printf("%d\n", 1000 + (B * 100));
	}

	if (A != B && B != C && A !=C)
	{
		if (A > B && A > C)
		{
			printf("%d", A * 100);
		}

		if (B > A && B > C)
		{
			printf("%d", B * 100);
		}

		if (C > A && C > B)
		{
			printf("%d", C * 100);
		}
	}
	return 0;
}
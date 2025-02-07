#include <stdio.h>

int main()
{
	int A;

	scanf("%d", &A);

	if (A >= 90 && A <= 100)
	{
		printf("A");

	}

	if (A >= 80 && A <= 89)
	{
		printf("B");

	}

	if (A >= 70 && A <= 79)
	{
		printf("C");

	}

	if (A >= 60 && A <= 69)
	{
		printf("D");

	}

	if (A < 60)
	{
		printf("F");

	}
	return 0;
}
#include <stdio.h>

int main()
{
	int A;
	int B;

	scanf("%d %d", &A, &B);

	if (A > B)
	{
		printf(">");
	}
	if (A < B)
	{
		printf("<");
	}

	if (A == B)
	{
		printf("==");
	}
	return 0;
}
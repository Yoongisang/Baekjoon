#include <stdio.h>

int main()
{
	int A, B;
	scanf("%d", &A);
	scanf("%d", &B);

	printf("%d\n", A * (B % 10));
	printf("%d\n", (A * ((B % 100) - (B % 10))) / 10);
	printf("%d\n", (A * (B - (B % 10) - ((B % 100) - (B % 10)))) / 100);
	printf("%d\n", A * B);

	return 0;
}
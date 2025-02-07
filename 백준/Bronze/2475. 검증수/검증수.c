#include <stdio.h>

int main()
{
	int Num[10];
	scanf(" %d", &Num[0]);
	scanf(" %d", &Num[1]);
	scanf(" %d", &Num[2]);
	scanf(" %d", &Num[3]);
	scanf(" %d", &Num[4]);

	Num[5] = (Num[0] * Num[0]) + (Num[1] * Num[1]) + (Num[2] * Num[2]) + (Num[3] * Num[3]) + (Num[4] * Num[4]);

	printf("%d", Num[5] % 10);

	return 0;
}
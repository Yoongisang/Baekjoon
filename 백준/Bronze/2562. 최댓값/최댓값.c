#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

	int num[9];

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &num[i], 9);
	}

	int a = 0;
	int b = 0;

	for (int i = 0; i < 9; i++)
	{
		if (num[i] > a)
		{
			a = num[i];
			b = i + 1;
		}
	}
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}
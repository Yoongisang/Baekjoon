#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
	int T;
	int Y;
	int K;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		int Yw = 0;
		int Kw = 0;
		for (int i = 0; i < 9; i++)
		{
			scanf("%d %d", &Y, &K);
			Yw += Y;
			Kw += K;
		}
		if (Yw > Kw)
		{
			printf("Yonsei\n");
		}
		else if (Yw < Kw)
		{
			printf("Korea\n");
		}
		else if (Yw == Kw)
		{
			printf("Draw\n");
		}
	}
	return 0;
}

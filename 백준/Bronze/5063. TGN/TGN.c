#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int N;
	int r, e, c;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d %d", &r, &e, &c);

		if (e - r == c)
		{
			printf("does not matter\n");
		}
		else if (e - r > c)
		{
			printf("advertise\n");
		}
		else if (e - r < c)
		{
			printf("do not advertise\n");
		}
	}
	return 0;
}

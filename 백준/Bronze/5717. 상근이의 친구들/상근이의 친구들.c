#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
	int M;
	int F;
	bool a = 1;
	while (a)
	{
		scanf("%d %d", &M, &F);
		
		if (M == 0 && F == 0)
		{
			a = 0;
		}
		else
		{
			printf("%d\n", M + F);
		}
	}
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int a[10020] = {};
	int b[10020] = {};
	int i = 0;
	while (1)
	{
		scanf("%d %d", &a[i], &b[i]);
		
		if (a[i] == 0 && b[i] == 0)
		{
			break;
		}
		else if (b[i] % a[i] == 0)
		{
			printf("factor\n");
		}
		else if (a[i] % b[i] == 0)
		{
			printf("multiple\n");
		}
		else
		{
			printf("neither\n");
		}
		

		i++;
	}
	return 0;
}

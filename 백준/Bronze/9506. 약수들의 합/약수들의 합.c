#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
	int n;
	
	

	while (1)
	{
		int y = 0;
		scanf("%d", &n);
		int a[100000] = {};
		int sum = 0;
		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				a[y] = i;
				y++;
				sum += i;
			}
		}
		if (n == -1)
		{
			break;
		}
		else if (sum == n)
		{
			printf("%d = 1", n);

			for (int i = 1; i < n - 1; i++)
			{
				printf(" + %d", a[i]);
				if (a[i + 1] == NULL)
				{
					break;
				}
			}
			printf("\n");
		}
		else if(sum != n)
		{
			printf("%d is NOT perfect.\n",n);
		}
	
	}
	return 0;
}

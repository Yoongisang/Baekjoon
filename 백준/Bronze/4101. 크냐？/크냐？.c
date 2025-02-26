#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int A, B;
	while (1)
	{
		scanf("%d %d", &A, &B);
		if (A > B)
		{
			printf("Yes\n");
		}
		else if (A == 0 && B == 0)
		{
			break;
		}
		else
		{
			printf("No\n");
		}

		
	}

	return 0;	
}
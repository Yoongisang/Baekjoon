#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int T;
	float A;
	char B[10] = {};
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%f", &A);
		getchar();

		fgets(B, sizeof(B), stdin);
	
		int bLen = strlen(B);
		float sum = A;
		for (int j = 0; j < bLen; j++)
		{
			if (B[j] == '@')
			{
				sum *= 3;
			}
			else if (B[j] == '%')
			{
				sum += 5;
			}
			else if (B[j] == '#')
			{
				sum -= 7;
			}
		}
		printf("%.2f\n", sum);
	}

	return 0;	
}
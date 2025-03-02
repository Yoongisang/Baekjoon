#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int N;
	int answer[110];
	int c = 0;
	int nC = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &answer[i]);
		if (answer[i] == 0)
		{
			nC++;
		}
		else if (answer[i] == 1)
		{
			c++;
		}
		else
		{
			printf("다시 입력하시오\n");
			scanf("%d", &answer[i]);
		}
	}
	if (c > nC)
	{
		printf("Junhee is cute!\n");
	}
	else if (c < nC)
	{
		printf("Junhee is not cute!\n");
	}
	return 0;
}

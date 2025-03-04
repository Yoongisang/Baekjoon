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
	int N;
	
	int L;
	scanf("%d", &T);
	
	for (int i = 0; i < T; i++)
	{
		char S[30] = {};
		char maxstr[30] = {};
		int maxnum = 0;
		scanf("%d", &N);
		for (int i = 0; i < N; i++)
		{
			scanf("%s %d", S, &L);
			if (L > maxnum)
			{
				maxnum = L;
				strcpy(maxstr, S);
			}
			
		}
		printf("%s\n", maxstr);
	}
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int V;
	int A = 0;
	int B = 0;
	char AB[30] = {};
	scanf("%d", &V);
	
	for (int i = 0; i < V; i++)
	{
		scanf(" %c", &AB[i]);
	}

	for (int i = 0; i < V; i++)
	{
		if (AB[i] == 'A')
		{
			A++;
		}
		else if (AB[i] == 'B')
		{
			B++;
		}
	}

	if (A == B)
	{
		printf("Tie\n");
	}
	else if (A > B)
	{
		printf("A\n");
	}
	else if (A < B)
	{
		printf("B\n");
	}
	return 0;
}

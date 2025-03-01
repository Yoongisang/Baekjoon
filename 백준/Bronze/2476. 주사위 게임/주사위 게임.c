#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int N;
	int a[1001], b[1001], c[1001] = {};
	int p[1001] = {};
	int pMax = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d %d", &a[i], &b[i], &c[i]);
	}

	for (int i = 0; i < N; i++)
	{
		if (a[i] == b[i] && a[i] == c[i])
		{
			p[i] = (a[i] * 1000) + 10000;
		}
		else if (a[i] != b[i] && b[i] != c[i] && c[i] != a[i])
		{
			if (a[i] > b[i] && a[i] > c[i])
			{
				p[i] = a[i] * 100;
			}
			else if (b[i] > a[i] && b[i] > c[i])
			{
				p[i] = b[i] * 100;
			}
			else if (c[i] > a[i] && c[i] > b[i])
			{
				p[i] = c[i] * 100;
			}
		}
		else if (a[i] == b[i] && a[i] != c[i] )
		{
			p[i] = (a[i] * 100) + 1000;
		}
		else if (a[i] == c[i] && a[i] != b[i])
		{
			p[i] = (a[i] * 100) + 1000;
		}
		else if (b[i] == c[i] && b[i] != a[i])
		{
			p[i] = (b[i] * 100) + 1000;
		}
	}

	for (int i = 0; i < N; i++)
	{
		
		if (p[i] > pMax)
		{
			pMax = p[i];
		}
	}
	printf("%d\n", pMax);
	return 0;
}

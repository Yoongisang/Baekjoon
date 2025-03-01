#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int a[2];
	int b[2];
	int c[2];
	int d[2];
	for (int i = 0; i < 2; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 2; i++)
	{
		scanf("%d", &b[i]);
	}
	for (int i = 0; i < 2; i++)
	{
		scanf("%d", &c[i]);
	}

	if (a[0] != b[0] && a[0] != c[0])
	{
		d[0] = a[0];
	}
	if (b[0] != a[0] && b[0] != c[0])
	{
		d[0] = b[0];
	}
	if (c[0] != a[0] && c[0] != b[0])
	{
		d[0] = c[0];
	}

	if (a[1] != b[1] && a[1] != c[1])
	{
		d[1] = a[1];
	}
	if (b[1] != a[1] && b[1] != c[1])
	{
		d[1] = b[1];
	}
	if (c[1] != a[1] && c[1] != b[1])
	{
		d[1] = c[1];
	}

	printf("%d %d\n", d[0], d[1]);
	return 0;
}

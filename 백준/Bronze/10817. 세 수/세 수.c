#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	int max, mid, min;

	if (A >= B && A >= C)
	{
		max = A;
		if (B >= C)
		{
			mid = B;
			min = C;
		}
		else
		{
			mid = C;
			min = B;
		}
	}
	else if (B >= A && B >= C)
	{
		max = B;
		if (A >= C)
		{
			mid = A;
			min = C;
		}
		else
		{
			mid = C;
			min = A;
		}
	}
	else if (C >= B && C >= A)
	{
		max = C;
		if (A >= B)
		{
			mid = A;
			min = B;
		}
		else 
		{
			mid = B;
			min = A;
		}
	}

	printf("%d\n", mid);

	return 0;	
}
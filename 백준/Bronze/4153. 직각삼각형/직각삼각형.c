#include <stdio.h>
#include <string.h>

int main()
{
	int a[3];
	int max;

	while (1)
	{
		for (int i = 0; i < 3; i++)
		{
			scanf("%d", &a[i]);
		}
		if (a[0] == 0 && a[1] == 0 && a[2] == 0)
		{
			break;
		}

		max = a[0];

		for (int j = 0; j < 3; j++)
		{
			if (a[j] > max)
			{
				max = a[j];
			}
	
		}
		if (max * max == (a[0] * a[0]) + (a[1] * a[1]) + (a[2] * a[2]) - (max * max))
		{
			printf("right\n");
		}
		else
		{
			printf("wrong\n");
		}
	}




	return 0;
}
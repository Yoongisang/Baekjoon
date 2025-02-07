#include <stdio.h>

int main()
{
	int a[8] = { 1,2,3,4,5,6,7,8 };
	int d[8] = { 8,7,6,5,4,3,2,1 };
	int input[8] = {};
	int check = 8;

	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &input[i]);
	}

	for (int i = 0; i < 8; i++)
	{
		if (input[i] == a[i])
		{
			check++;
		}
		if (input[i] == d[i])
		{
			check--;
		}
		
	}
	

	if (check == 16)
	{
		printf("ascending\n");
	}

	if (check == 0)
	{
		printf("descending\n");
	}

	if (check != 16 && check != 0)
	{
		printf("mixed\n");
	}


	return 0;
}
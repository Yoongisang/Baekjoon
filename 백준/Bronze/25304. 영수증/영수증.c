#include <stdio.h>

int main()
{
	int input_total_price;
	int output_total_prince = 0;
	int type;
	int prince_num[1000][2];
	scanf("%d", &input_total_price);
	scanf("%d", &type);

	for (int i = 0; i < type; i++)
	{
		int total;
		scanf("%d %d", &prince_num[i][1], &prince_num[i][2]);
		output_total_prince += prince_num[i][1] * prince_num[i][2];



	}

	if (input_total_price == output_total_prince)
	{
		printf("Yes\n");
	}

	if (input_total_price != output_total_prince)
	{
		printf("No\n");
	}



	return 0;
}
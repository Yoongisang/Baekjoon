#include <stdio.h>
#include <string.h>



int main()
{
	float N;
	float count;
	int sum = 0;
	int i = 0;
	scanf("%f", &N);

	while (1)
	{
	
		count = (N - 1) / 6; 
		
		sum += i; 
		i++;
		if (N ==1)
		{
			printf("1\n");
			break;
		}
		if (count == 0)
		{
			printf("1\n");
			break;
		}
		if (count > sum && count <= sum + i)
		{
			printf("%d\n", i + 1);
			break;
			
		}
	}

	return 0;
}




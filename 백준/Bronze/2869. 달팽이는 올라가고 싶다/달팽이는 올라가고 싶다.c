#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	int V, A, B;
	scanf("%d %d %d", &A, &B, &V);

	if (V <= A)
	{
		printf("1\n");
		return 0;
	}

	if ((V - B) % (A - B) == 0)
	{
		printf("%d\n", (V - B) / (A - B)); 
	}
	else
	{
		printf("%d\n", ((V - B) / (A - B)) + 1); 
	}
	
	return 0;
}




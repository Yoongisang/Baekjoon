#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	int T;
	int k, n;
	
	scanf("%d", &T);

	while (T--)
	{
		scanf("%d %d", &k, &n);

		int nop[15][15] = {0};

		for (int j = 1; j <= n; j++)
		{
			nop[0][j] = j;
		}

		for (int i = 1; i <= k; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				nop[i][j] = nop[i - 1][j] + nop[i][j - 1];
			}
		}

		printf("%d\n", nop[k][n]);


	}

	
	return 0;
}




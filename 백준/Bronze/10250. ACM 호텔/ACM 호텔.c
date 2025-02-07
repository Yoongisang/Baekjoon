#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int T;
	int H[100], W[100], N[10000];
	char data[100][100][10];

	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &H[i]); //층
		scanf("%d", &W[i]); //호수
		scanf("%d", &N[i]); //인원수
		for (int j = 0; j < H[i]; j++)
		{
			for (int a = 0; a < W[i]; a++)
			{
				sprintf(data[j][a], "%d%02d", j + 1, a + 1);
			}
		}
		
	}
	for (int i = 0; i < T; i++)
	{
		int floor, room;
		if (N[i] % H[i] == 0)
		{
			floor = H[i];
			room = N[i] / H[i];
		}
		else
		{
			floor = N[i] % H[i];
			room = (N[i] / H[i]) + 1;
		}
		printf("%s\n", data[floor - 1][room - 1]);
	}

	return 0;
}
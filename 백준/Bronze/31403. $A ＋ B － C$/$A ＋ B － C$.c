#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

	char A[110] = {};
	char B[110] = {};
	char C[110] = {};
	char str[220] = {};
	scanf("%s", &A ,110);
	scanf("%s", &B, 110);
	scanf("%s", &C, 110);
	strcpy(str, A);
	strcat(str, B);
	int num = atoi(A) + atoi(B) - atoi(C);
	int str_num = atoi(str) - atoi(C);
	printf("%d\n", num);
	printf("%d\n", str_num);

	return 0;
}

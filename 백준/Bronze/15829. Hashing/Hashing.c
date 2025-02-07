#include <stdio.h>
#include <string.h>



int main()
{
	int L;
	scanf("%d", &L);

	char str[1001];
	scanf("%s", str, (unsigned)sizeof(str));

	const long long M = 1234567891;
	const long long r = 31;
	long long hash = 0;
	long long power = 1;

	for (int i = 0; i < L; i++)
	{
		int value = str[i] - 'a' + 1;
		hash = (hash + (value * power) % M) % M;
		power = (power * r) % M;
	}

	printf("%lld\n", hash);
	return 0;
}




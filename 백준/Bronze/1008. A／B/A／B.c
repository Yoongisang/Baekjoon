#include <stdio.h>

int main()
{
	double A = 0;
	double B = 0;

	scanf(" %lf", &A);
	scanf(" %lf", &B);

	printf("%.10lf", A/B);

	return 0;
}
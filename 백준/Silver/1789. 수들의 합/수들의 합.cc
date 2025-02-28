#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
	float S;
	long long int N;
	float a;

	cin >> S;
	a = sqrt(1 + (8 * S));
	N = (a - 1) / 2;

	cout << N << endl;
	return 0;
}

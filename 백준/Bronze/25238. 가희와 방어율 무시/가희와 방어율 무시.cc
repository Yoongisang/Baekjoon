#include <iostream>

using namespace std;

int main()
{
	float Defence;
	float A;
	float result;
	cin >> Defence;
	cin >> A;

	result = Defence - (Defence * (A / 100));
	if (result < 100)
	{
		cout << "1"  <<endl;
	}
	else if (result >= 100)
	{
		cout << "0"  << endl;
	}
	return 0;
}
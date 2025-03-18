#include <iostream>

using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	if (A + B + C == 180)
	{
		if (A == B && A == C)
		{
			cout << "Equilateral" << endl;
		}
		else if (A == B && A != C)
		{
			cout << "Isosceles" << endl;
		}
		else if (A == C && A != B)
		{
			cout << "Isosceles" << endl;
		}
		else if (B == C && B != A)
		{
			cout << "Isosceles" << endl;
		}
		else if (A != B && A != C && B != C)
		{
			cout << "Scalene" << endl;
		}
	}
	else
	{
		cout << "Error" << endl;
	}
	return 0;
}
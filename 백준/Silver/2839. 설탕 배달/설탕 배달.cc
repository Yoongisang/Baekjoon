#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int result = -1;

	for (int i = 0; i <= N / 5; i++)
	{
		int remaining = N - i * 5;
		if (remaining % 3 == 0)
		{
			int three = remaining / 3;
			int totalBags = i + three;
			if (result == -1 || totalBags < result)
			{
				result = totalBags;
			}
		}
	}
	cout << result << endl;
	return 0;
}